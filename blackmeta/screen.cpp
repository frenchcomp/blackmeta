/**
 * LICENSE
 *
 * This source file is subject to the MIT license and the version 3 of the GPL3
 * license that are bundled with this package in the folder licences
 * If you did not receive a copy of the license and are unable to
 * obtain it through the world-wide-web, please send an email
 * to richarddeloge@gmail.com so we can send you a copy immediately.
 *
 *
 * @copyright   Copyright (c) Richard Déloge (richarddeloge@gmail.com)
 *
 * @license     http://teknoo.software/license/mit         MIT License
 * @author      Richard Déloge <richarddeloge@gmail.com>
 */
#include <Gamebuino-Meta.h>
#include "screen.h"

/**
 * To print last three cards dealed to the desk. All points are display in another placeholder
 */
void Screen::drawLastCards(int16_t y, Desk *desk)
{
  int16_t i = 0;
  int16_t x = 25;
  Card* card;
  
  while (NULL != (card = desk->getLastCard(i)) && i < 3) {
    this->drawCard(x, y, card);
    x += 11;
    i++;
  }
}

/**
 * Sub function to draw the body of the card, without its color and number
 */
void Screen::drawCard(int16_t x, int16_t y, Card* card) {
  gb.display.drawImage(x, y, *this->cardSprite);
 
  this->drawSuit(x + 1, y + 2, card->getColor());
  this->drawValue(x + 5, y + 7, card->getNumber(), card->isRed());
}

/**
 * Sub function to draw, from the sprite cardSprite, the color of the card
 */
void Screen::drawSuit(int16_t x, int16_t y, Suit color) {
  //Select the good frame (all suits are encoded into an unique sprite, it's like a crop)
  this->suitSprite->setFrame(color);
  gb.display.drawImage(x, y, *this->suitSprite);
}

/**
 * Sub function to draw, from the sprint valueSprite, the value of the card
 */
void Screen::drawValue(int16_t x, int16_t y, Value number, bool isRed) {
  //Select the good frame (all values are encoded into an unique sprite, it's like a crop)
  this->valueSprite->setFrame(number + (isRed ? 14 : 0));
  gb.display.drawImage(x, y, *this->valueSprite);
  
  if (ten == number) {
    this->valueSprite->setFrame(isRed ? 14 : 0);
    gb.display.drawImage(x - 4, y, *this->valueSprite);
  }
}

/**
 * Sub function to draw text actions to help user
 */
void Screen::drawActions()
{  
  gb.display.drawImage(0, 48, *this->backgroundImage);

  gb.display.clearTextVars();
  gb.display.setColor(WHITE);
  
  switch (this->workflow->getCurrentStep()) {
    case Workflow::stepDealing:
      this->drawDesks();
      break;
    case Workflow::stepPlayerTurn:
      gb.display.setCursor(6, 50);
      gb.display.print("A: Hit | B: Stand ");
      break;
    case Workflow::stepPlayerHit:
      gb.display.setCursor(33, 50);
      gb.display.print("Hit");
      break;
    case Workflow::stepBankDealing:
      gb.display.setCursor(30, 50);
      gb.display.print("Stand");
      break;
    case Workflow::stepEnd:
      if (this->playerDesk->hasWon(*this->bankDesk)) {
        gb.display.setCursor(8, 50);
        gb.display.setColor(LIGHTGREEN);
        gb.display.print("Win - Press Menu");
      } else {
        gb.display.setCursor(6, 50);
        gb.display.setColor(RED);
        gb.display.print("Lost - Press Menu");
      }
      
      break;
  }
}

/**
 * Sub function two draws points for each deck (with max total when there are an as)
 * because all cards can not be displayed.
 */
void Screen::drawPoints(int16_t y, Desk *desk)
{
  //Display background board
  gb.display.setColor(BROWN);
  gb.display.fillRect(59, y-1, 20, 7);
  gb.display.setColor(DARKGRAY);
  gb.display.fillRect(60, y, 18, 5);

  //Display min total
  gb.display.setColor(WHITE);
  gb.display.setCursor(60, y);
  unsigned short totalMin = desk->totalMin();
  gb.display.println(totalMin);

  //Display max total if diff, in red
  unsigned short totalMax = desk->totalMax();
  if (totalMin != totalMax) {
    gb.display.setCursor(71, y);
    gb.display.setColor(RED);
    gb.display.println(totalMax);
  }
}

/**
 * Constructor to set mandatory desks and workflow
 */
Screen::Screen(Workflow &workflow, Desk &playerDesk, Desk &bankDesk)
{
  this->workflow = &workflow;
  this->playerDesk = &playerDesk;
  this->bankDesk = &bankDesk;
}

/**
 * To register in the object sprite to use
 */
void Screen::setSprite(Image &backgroundImage, Image &cardSprite, Image &valueSprite, Image &suitSprite)
{
  this->backgroundImage = &backgroundImage;
  this->cardSprite = &cardSprite;
  this->valueSprite = &valueSprite;
  this->suitSprite = &suitSprite;
}

/**
 * Initial call to draw the empty desk or when the game is restarted
 */
void Screen::drawDesks()
{  
  //Draw the brackground
  gb.display.drawImage(0, 0, *this->backgroundImage);

  //Write title
  gb.display.clearTextVars();
  gb.display.setColor(BLACK);
  gb.display.setCursor(20, 2);
  gb.display.println("Black Meta");

  //Write placeholder' labels
  gb.display.setColor(WHITE);
  gb.display.setCursor(2, 15);
  gb.display.println("Bank: ");
  gb.display.setCursor(2, 31);
  gb.display.println("You: ");
}

/**
 * To refresh the display following the workflow
 */
void Screen::updateDisplay()
{  
  this->drawLastCards(10, this->bankDesk);
  this->drawLastCards(27, this->playerDesk);
  
  this->drawPoints(15, this->bankDesk);
  this->drawPoints(31, this->playerDesk);
  
  this->drawActions();
}

