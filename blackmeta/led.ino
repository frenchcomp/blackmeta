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
#include "led.h"

/**
 * Constructor to set mandatory desks and workflow
 */
Led::Led(Workflow &workflow, Desk &playerDesk, Desk &bankDesk)
{
  this->workflow = &workflow;
  this->playerDesk = &playerDesk;
  this->bankDesk = &bankDesk;
}

/**
 * To refresh lights
 */
void Led::updateLights()
{
  switch (this->workflow->getCurrentStep()) {
    case Workflow::stepPlayerTurn:
        gb.lights.setColor(WHITE);      
      break;
    case Workflow::stepDealing:
    case Workflow::stepPlayerHit:
    case Workflow::stepBankDealing:
        gb.lights.setColor(LIGHTBLUE); 
      break;
    case Workflow::stepEnd:
      if (this->playerDesk->hasWon(*this->bankDesk)) {
        gb.lights.setColor(LIGHTGREEN);        
      } else {
        gb.lights.setColor(RED);
      }
      
      break;
  }  

  gb.lights.fill();
}

