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

Screen::Screen(Workflow &workflow, Desk &playerDesk, Desk &bankDesk)
{
  this->workflow = &workflow;
  this->playerDesk = &playerDesk;
  this->bankDesk = &bankDesk;
}

void Screen::updateDisplay()
{
  // clear the screen
  gb.display.clear();
  gb.lights.clear();

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

