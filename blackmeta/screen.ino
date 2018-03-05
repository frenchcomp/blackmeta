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
#include "sprites.h"

void Screen::drawCard(int16_t x, int16_t y, Card* card) {
  gb.display.drawImage(x, y, cardSprite);
 
  this->drawSuit(x + 1, y + 2, card->getColor());
  this->drawValue(x + 5, y + 7, card->getNumber(), card->isRed());
}

void Screen::drawSuit(int16_t x, int16_t y, Suit color) {
  suitSprite.setFrame(color);
  gb.display.drawImage(x, y, suitSprite);
}

void Screen::drawValue(int16_t x, int16_t y, Value number, bool isRed) {
  valueSprite.setFrame(number + (isRed ? 14 : 0));
  gb.display.drawImage(x, y, valueSprite);
  
  if (ten == number) {
    valueSprite.setFrame(isRed ? 14 : 0);
    gb.display.drawImage(x - 4, y, valueSprite);
  }
}

Screen::Screen(Workflow &workflow, Desk &playerDesk, Desk &bankDesk)
{
  this->workflow = &workflow;
  this->playerDesk = &playerDesk;
  this->bankDesk = &bankDesk;
}

void Screen::drawDesks()
{  
  //Draw the brackground
  gb.display.drawImage(0, 0, backgroundImage);

  //Write title
  gb.display.setCursor(20, 2);
  gb.display.println("Black Meta");

  //Write placeholder' labels
  gb.display.setCursor(2, 15);
  gb.display.println("Bank: ");
  gb.display.setCursor(2, 31);
  gb.display.println("You: ");
}

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

void Screen::drawActions()
{  
  gb.display.drawImage(0, 48, backgroundImage);
  
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
        gb.display.print("Win - Press Menu");
      } else {
        gb.display.setCursor(6, 50);
        gb.display.print("Lost - Press Menu");
      }
      
      break;
  }
}

void Screen::updateDisplay()
{  
  this->drawLastCards(10, this->bankDesk);
  this->drawLastCards(27, this->playerDesk);
  
  this->drawActions();
}

