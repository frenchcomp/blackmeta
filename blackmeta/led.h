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


#ifndef led_h
#define led_h

#include "desk.h"
#include "workflow.h"

/**
 * Class to manage LED following workflow steps
 */
class Led
{
  private:
    Workflow* workflow;  
    Desk* playerDesk;
    Desk* bankDesk;

  public:
    /**
     * Constructor to set mandatory desks and workflow
     */
    Led(Workflow &workflow, Desk &playerDesk, Desk &bankDesk);

    /**
     * To refresh lights, when the user won, LED are green, if it lost, LED are red, else are White.
     */
    void updateLights();
};

#endif
