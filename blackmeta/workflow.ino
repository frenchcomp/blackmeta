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
 
#include "workflow.h"

/**
 * To get a new random card from the dealer and push it on the passed desk
 */
void Workflow::dealCardTo(Desk *desk)
{
  Card *card = this->dealer->dealOne();
  if (!desk->add(card)) {
    delete card;
  }
}

/**
 * To clean all desk and delete all generated cards
 */
void Workflow::restart()
{
  this->playerDesk->clean();
  this->bankDesk->clean();
}

/**
 * Deal 2 cards on the player's desk and 2 another to the bank's desk
 */
void Workflow::firstDealing()
{  
  this->playerDesk->add(this->dealer->dealOne());
  this->bankDesk->add(this->dealer->dealOne());
  this->playerDesk->add(this->dealer->dealOne());
  this->bankDesk->add(this->dealer->dealOne());
}

/**
 * To deal a new card to the player
 */
void Workflow::hitCard()
{
  this->dealCardTo(this->playerDesk);
}

/**
 * Deals card to the bank desk until 17 point, without breaking up.
 */
void Workflow::bankDealing()
{
  while (!this->bankDesk->isBreaking() && this->bankDesk->hasLess17()){
    this->dealCardTo(this->bankDesk);
  }
}

/**
 * Default constructor to require dealer and desks
 */
Workflow::Workflow(Dealer &dealer, Desk &playerDesk, Desk &bankDesk)
{
  this->dealer = &dealer;
  this->playerDesk = &playerDesk;
  this->bankDesk = &bankDesk;

  //Clean desk
  this->restart();

  //Start loop
  this->currentStep = Workflow::stepDealing;
}

/**
 * To know the current step of the game
 */
ushort Workflow::getCurrentStep()
{
  return this->currentStep;
}

/**
 * To pass the user input to the worflow to change of step if needed
 */
void Workflow::inputAction(bool buttonA, bool buttonB, bool buttonMenu)
{
  this->buttonA = buttonA;
  this->buttonB = buttonB;
  this->buttonMenu = buttonMenu;
}

/**
 * To execute the workflow, and methods defined in the workflow, according to the user choices.
 */
void Workflow::run()
{
  switch (this->currentStep) {
    //First step, no user interaction, deals card and switch to player turn
    case Workflow::stepDealing:
      this->firstDealing();
      this->currentStep = Workflow::stepPlayerTurn;
      break;

    //Player turn, if there are no interaction, this step do nothing
    case Workflow::stepPlayerTurn:
      if (true == this->buttonA) {
        //Button A pressed, switch to Hit step
        this->currentStep = Workflow::stepPlayerHit;
        return;
      }
      
      if (true == this->buttonB) {
        //Button B pressed, user stand, switch to bank dealing
        this->currentStep = Workflow::stepBankDealing;  
        return;
      }
      break;

    //Player hit a card, dealer give one. If the player is breaking up, switch directly to endStep
    //else return to player turn step
    case Workflow::stepPlayerHit:
      this->hitCard();

      if (this->playerDesk->isBreaking()) {
        this->currentStep = Workflow::stepEnd;
      } else {
        this->currentStep = Workflow::stepPlayerTurn;
      }
      break;

    //Dealers give cards to bank, following rules, then switch to end step
    case Workflow::stepBankDealing:
      this->bankDealing();

      this->currentStep = Workflow::stepEnd;
      break;

    //End step, do nothing if button menu is not pressed, else, reset desk and workflow
    case Workflow::stepEnd:
      if (true == this->buttonMenu) {
        this->restart();
        
        this->currentStep = Workflow::stepDealing;
      }
    
      break;
  }
}

