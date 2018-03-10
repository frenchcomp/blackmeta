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

#ifndef workflow_h
#define workflow_h

#include "desk.h"
#include "dealer.h"

/**
 * Class to represent the workflow of the game, and manage them :
 *  - Deal two cards to the player and to the bank
 *  - Allow player to hit cards or stand
 *  - Bank hits card until 17
 *  - Display the result
 */
class Workflow
{
  private:
    Dealer* dealer;
    Desk* playerDesk;
    Desk* bankDesk;

    /**
     * To represent the current step of the workflow
     */
    unsigned short currentStep;

    /**
     * To flag buttons pressed by the user at this turn
     */
    bool buttonA;
    bool buttonB;
    bool buttonMenu;

    /**
     * To get a new random card from the dealer and push it on the passed desk
     */
    void dealCardTo(Desk *desk);

    /**
     * To clean all desk and delete all generated cards
     */
    void restart();

    /**
     * Deal 2 cards on the player's desk and 2 another to the bank's desk
     */
    void firstDealing();

    /**
     * To deal a new card to the player
     */
    void hitCard();

    /**
     * Deals card to the bank desk until 17 point, without breaking up.
     */
    void bankDealing();
    
  public:
    /**
     * Available steps of the workflow
     */
    const static unsigned short stepDealing = 0;
    const static unsigned short stepPlayerTurn = 1;
    const static unsigned short stepPlayerHit = 2;
    const static unsigned short stepBankDealing = 3;
    const static unsigned short stepEnd = 4;
    
    /**
     * Default constructor to require dealer and desks
     */
    Workflow(Dealer &dealer, Desk &playerDesk, Desk &bankDesk);

    /**
     * To know the current step of the game
     */
    unsigned short getCurrentStep();

    /**
     * To pass the user input to the worflow to change of step if needed
     */
    void inputAction(bool buttonA, bool buttonB, bool buttonMenu);

    /**
     * To execute the workflow, and methods defined in the workflow, according to the user choices.
     */
    void run();
};

#endif

