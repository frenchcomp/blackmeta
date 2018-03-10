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

#include "card.h"

/**
 * Constructor to set mandatory color and value of this card
 */
Card::Card(Suit color, Value number, unsigned short valMin, unsigned short valMax)
{
  this->color = color;
  this->number = number;
  this->valMin = valMin;
  this->valMax = valMax;
}

/**
 * To return the min value of this card. 
 * @see the property valMin 
 * @return unsigned int between 1 and 10.
 */
unsigned short Card::getMin() const
{
  return this->valMin;
}

/**
 * To return the max value of this card. 
 * @see the property valMax 
 * @return unsigned int between 2 and 11.
 */
unsigned short Card::getMax() const
{
  return this->valMax;
}


/**
 * Return the color of this card
 */
Suit Card::getColor() const
{
  return this->color;
}

/**
 * Return the value of this card
 */
Value Card::getNumber() const
{
  return this->number;
}

/**
 * To know if the card is red or not
 */
bool Card::isRed()
{
  switch (this->color) {
    case spade:
    case heart:
      return true;
      break;
    default:
      return false;
      break;
  }
}

