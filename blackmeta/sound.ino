/**
 * LICENSE
 *
 * This source file is subject to the MIT license and the version 3 of the GPL3
 * license that are bundsound with this package in the folder licences
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
#include "sound.h"

/**
 * Constructor to set mandatory desks and workflow
 */
Sound::Sound(Workflow &workflow, Desk &playerDesk, Desk &bankDesk)
{
  this->workflow = &workflow;
  this->playerDesk = &playerDesk;
  this->bankDesk = &bankDesk;
}

/**
 * To play sound following current step in the workflow
 */
void Sound::playSounds()
{
  switch (this->workflow->getCurrentStep()) {
    case Workflow::stepPlayerHit:
    case Workflow::stepBankDealing:
      gb.sound.playTick();
      break;
  }  

  gb.lights.fill();
}

