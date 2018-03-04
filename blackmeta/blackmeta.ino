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
#include "card.h"
#include "desk.h"
#include "dealer.h"
#include "workflow.h"
#include "screen.h"

Dealer croupier;
Desk playerDesk;
Desk bankDesk;
Workflow gameWorkflow(croupier, playerDesk, bankDesk);
Screen gbScreen(gameWorkflow, playerDesk, bankDesk);

void setup() 
{
  gb.begin();
}

void loop()
{
  while(!gb.update());

  gameWorkflow.inputAction(
    gb.buttons.pressed(BUTTON_A),
    gb.buttons.pressed(BUTTON_B),
    gb.buttons.pressed(BUTTON_MENU)
  );

  gbScreen.updateDisplay();

  gameWorkflow.run();
}
