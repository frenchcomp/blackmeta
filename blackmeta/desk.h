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

#ifndef desk_h
#define desk_h

#include "card.h"

/**
 * Object managing a desk of the user or of the bank. It can accept 21 cards.
 * It able to count the total of cards and detect who are won
 */
class Desk {
  private:
    /**
     * Only 22 cards can be deals (Else, 21 is exceeded). It's used like a registry
     */
    Card* cards[22];

    /**
     * Size of the cards list
     */
    unsigned short count;

  public:
    /**
     * To clean the desk at construction
     */
    Desk();

    /**
     * To delete all cards in the desk from the memory and set all case of the registry to NULL
     */
    void clean();

    /**
     * To push a new card to the desk. If the desk has already 21 card, this operation fail and the method return false.
     */
    bool add(Card *c);

    /**
     * To have the total of points, with AS=1 on the desk
     */
    unsigned short totalMin();

    /**
     * To have the total of points, with AS=11 on the desk
     */
    unsigned short totalMax();

    /**
     * To know if the desk is breaking (so total points exceed 21, with AS=1)
     */
    bool isBreaking();

    /**
     * To know if the desk has at less 17points or not with its card.
     */
    bool hasLess17();

    /**
     * To know if this desk of the other desk has more points, without beaking up.
     */
    bool hasWon(Desk &otherDesk);

    /**
     * To get the last card of the desk, or it's previous if the offset is great than 0.
     */
    Card* getLastCard(unsigned int offset);
};

#endif

