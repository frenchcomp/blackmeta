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

#include "desk.h"

/**
 * To clean the desk at construction
 */
Desk::Desk() 
{
  this->clean();
}

/**
 * To delete all cards in the desk from the memory and set all case of the registry to NULL
 */
void Desk::clean()
{
  for (short i=0; i<22; i++) {
    if (NULL != this->cards[i]) {
      delete this->cards[i];
    }
    this->cards[i] = NULL;
  }

  this->count = 0;
}

/**
 * To push a new card to the desk. If the desk has already 21 card, this operation fail and the method return false.
 */
bool Desk::add(Card *c) 
{
  if (this->count > 21) {
    return false;
  }

  this->cards[this->count] = c;
  this->count++;

  return true;
}

/**
 * To have the total of points, with AS=1 on the desk
 */
ushort Desk::totalMin()
{
  ushort total = 0;
  for (short i=0; i<this->count; i++) {
    total += this->cards[i]->getMin();
  }

  return total;
}

/**
 * To have the total of points, with AS=11 on the desk
 */
ushort Desk::totalMax()
{
  ushort total = 0;
  for (short i=0; i<this->count; i++) {
    total += this->cards[i]->getMax();
  }

  return total;
}

/**
 * To know if the desk is breaking (so total points exceed 21, with AS=1)
 */
bool Desk::isBreaking()
{
  if (21 < this->totalMin()) {
    return true;
  }

  return false;
}

/**
 * To know if the desk has at less 17points or not with its card.
 */
bool Desk::hasLess17()
{
  if (17 > this->totalMin()) {
    return true;
  }

  return false;
}

/**
 * To know if this desk of the other desk has more points, without beaking up.
 */
bool Desk::hasWon(Desk &otherDesk)
{
  if (this->isBreaking()) {
    return false;
  }

  if (otherDesk.isBreaking()) {
    return true;
  }

  ushort myTotal = this->totalMax();
  if (21 < myTotal) {
    myTotal = this->totalMin();
  }

  ushort yourTotal = otherDesk.totalMax();
  if (21 < yourTotal) {
    yourTotal = otherDesk.totalMin();
  }

  return myTotal > yourTotal;
}

/**
 * To get the last card of the desk, or it's previous if the offset is great than 0.
 */
Card* Desk::getLastCard(unsigned int offset) 
{
  if (offset >= this->count) {
    return NULL;
  }

  return this->cards[this->count-offset-1];
}

