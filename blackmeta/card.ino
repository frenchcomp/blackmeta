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
Card::Card(char color, short number, ushort valMin, ushort valMax) 
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
ushort Card::getMin()
{
  return this->valMin;
}

/**
 * To return the max value of this card. 
 * @see the property valMax 
 * @return unsigned int between 2 and 11.
 */
ushort Card::getMax()
{
  return this->valMax;
}

/**
 * To know the identifier of this card, composed of two CHAR:
 * @return char[2]
 * First char : H=Heart, T=Tiles, L=cLover, P=Pikes
 * Second char : 1,2,3,5,6,7,8,9,T,J,Q,K     * 
 */
String Card::getCode()
{
  String code = String(this->color);
  switch (this->number) {
    case 10:
      return code + "T";
      break;
    case 11:
      return code + "J";
      break;
    case 12:
      return code + "D";
      break;
    case 13:
      return code + "K";
      break;
    default:
      return code + this->number;
      break;      
  }

  return String("EE");
}

