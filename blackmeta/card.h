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

#ifndef card_h
#define card_h

/**
 * Value object to represent a card dealed by the bank to a desk. A card is defined by a color and a number (1-10, Jack, Queen, King)
 */
class  Card 
{
  private:
    /**
     * H=Heart, T=Tiles, L=cLover, P=Pikes
     */
    char color;
    
    /**
     * 1 = As, 11=Jack, 12=Queen, 13=King
     */
    ushort number;

    /**
     * If number = 1 : valMin = 1
     * If number > 10 : valMin = 10
     * Else valMin = number
     */
    ushort valMin;

    /**
     * If number = 1 : valMax = 11
     * If number > 10 : valMax = 10
     * Else valMin = number
     */
    ushort valMax;

  public:    
    /**
     * Constructor to set mandatory color and value of this card
     */
    Card(char color, short number, ushort valMin, ushort valMax);

    /**
     * To return the min value of this card. 
     * @see the property valMin 
     * @return unsigned int between 1 and 10.
     */
    ushort getMin();

    /**
     * To return the max value of this card. 
     * @see the property valMax 
     * @return unsigned int between 2 and 11.
     */
    ushort getMax();

    /**
     * To know the identifier of this card, composed of two CHAR:
     * @return char[2]
     * First char : H=Heart, T=Tiles, L=cLover, P=Pikes
     * Second char : 1,2,3,5,6,7,8,9,T,J,Q,K     * 
     */
    String getCode();
};

#endif

