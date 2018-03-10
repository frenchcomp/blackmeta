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

#include "dealer.h"
#include <Gamebuino-Meta.h>

/**
 * To pick randomly a color
 */
Suit Dealer::randomColor()
{
  return (Suit) random(0, 3);
}

/**
 * To pick randomly a number (1-10, J, Q, K)
 */
Value Dealer::randomCard()
{
  return (Value) random(1, 13);
}

/**
 * To determine the minimum value of the card (AS can give 1 or 11 points, J,Q,K give only 10).
 */
unsigned short Dealer::getMinValue(short card)
{
  if (1 == card) {
    return 1;
  }

  if (10 < card) {
    return 10;
  }

  return card;
}

/**
 * To determine the minimum value of the card (AS can give 1 or 11 points, J,Q,K give only 10).
 */
unsigned short Dealer::getMaxValue(unsigned short card)
{
  if (1 == card) {
    return 11;
  }

  if (10 < card) {
    return 10;
  }

  return card;
}


/**
 * To deal a random card
 */
Card* Dealer::dealOne()
{
  Value n = this->randomCard();
  
  return new Card(
    this->randomColor(),
    n,
    this->getMinValue(n),
    this->getMaxValue(n)
  );
}

