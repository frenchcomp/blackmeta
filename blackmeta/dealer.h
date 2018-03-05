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

#ifndef dealer_h
#define dealer_h

#include "card.h"

/**
 * To represent the dealer, able to deal card from a set. In reality, card are generated randomly at each deal.
 * There are not a real set of 56 cards.
 */
class Dealer
{
  private:
    /**
     * To pick randomly a color
     */
    Suit randomColor();

    /**
     * To pick randomly a number (1-10, J, Q, K)
     */
    Value randomCard();

    /**
     * To determine the minimum value of the card (AS can give 1 or 11 points, J,Q,K give only 10).
     */
    ushort getMinValue(short card);

    /**
     * To determine the minimum value of the card (AS can give 1 or 11 points, J,Q,K give only 10).
     */
    ushort getMaxValue(ushort card);

  public:
    /**
     * To deal a random card
     */
    Card* dealOne();
};

#endif

