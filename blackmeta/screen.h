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


#ifndef screen_h
#define screen_h

#include "desk.h"
#include "workflow.h"

class Screen
{
  private:
    Workflow* workflow;  
    Desk* playerDesk;
    Desk* bankDesk;

  public:
    Screen(Workflow &workflow, Desk &playerDesk, Desk &bankDesk);

    void updateDisplay();
};

#endif
