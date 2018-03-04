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

Screen::Screen(Workflow &workflow, Desk &playerDesk, Desk &bankDesk)
{
  this->workflow = &workflow;
  this->playerDesk = &playerDesk;
  this->bankDesk = &bankDesk;
}

void Screen::drawDesks()
{  
  //clear the screen
  gb.display.clear();

  //Draw the brackground
  gb.display.drawImage(0, 0, backgroundImage);

  //Write title
  gb.display.setCursor(20, 2);
  gb.display.println("Black Meta");

  //Write placeholder' labels
  gb.display.setCursor(2, 15);
  gb.display.println("Bank: ");
  gb.display.setCursor(2, 30);
  gb.display.println("You: ");
}

void Screen::updateDisplay()
{
  return;
  gb.display.println("Black Meta\n");
  gb.display.print("Bank: ");
  gb.display.println(this->bankDesk->listCardsCodes());
  
  gb.display.print("You: ");
  gb.display.println(this->playerDesk->listCardsCodes());
  gb.display.println("\n");
  
  switch (this->workflow->getCurrentStep()) {
    case Workflow::stepDealing:
      gb.display.println("Dealing");
      break;
    case Workflow::stepPlayerTurn:
      gb.display.println("A - Hit | B - Stand ");
      break;
    case Workflow::stepPlayerHit:
      gb.display.println("Hit");
      break;
    case Workflow::stepBankDealing:
      gb.display.println("Stand");
      break;
    case Workflow::stepEnd:
      if (this->playerDesk->hasWon(*this->bankDesk)) {
        gb.display.printf("WIN ! (%d / %d - %d / %d)", this->playerDesk->totalMin(), this->playerDesk->totalMax(), this->bankDesk->totalMin(), this->bankDesk->totalMax());
      } else {
        gb.display.printf("LOST ! (%d / %d - %d / %d)", this->playerDesk->totalMin(),this->playerDesk->totalMax(),  this->bankDesk->totalMin(), this->bankDesk->totalMax());
      }
      
      break;
  }
}

