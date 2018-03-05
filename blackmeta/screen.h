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


#ifndef screen_h
#define screen_h

#include "desk.h"
#include "workflow.h"

/**
 * Class to print the game, desks (bank and player, total of each desk, dealed card, and instructions)
 * according to the workflow's step/status.
 */
class Screen
{
  private:
    Workflow* workflow;  
    Desk* playerDesk;
    Desk* bankDesk;

    Image* backgroundImage;
    Image* cardSprite;
    Image* valueSprite;
    Image* suitSprite;

    /**
     * To print last three cards dealed to the desk. All points are display in another placeholder
     */
    void drawLastCards(int16_t y, Desk *desk);

    /**
     * Sub function to draw the body of the card, without its color and number
     */
    void drawCard(int16_t x, int16_t y, Card *card);

    /**
     * Sub function to draw, from the sprite cardSprite, the color of the card
     */
    void drawSuit(int16_t x, int16_t y, Suit color);

    /**
     * Sub function to draw, from the sprint valueSprite, the value of the card
     */
    void drawValue(int16_t x, int16_t y, Value number, bool isRed);

    /**
     * Sub function to draw text actions to help user
     */
    void drawActions();

    /**
     * Sub function two draws points for each deck (with max total when there are an as)
     * because all cards can not be displayed.
     */
    void drawPoints(int16_t y, Desk *desk);
    
  public:
    /**
     * Constructor to set mandatory desks and workflow
     */
    Screen(Workflow &workflow, Desk &playerDesk, Desk &bankDesk);

    /**
     * To register in the object sprite to use
     */
    void setSprite(Image &backgroundImage, Image &cardSprite, Image &valueSprite, Image &suitSprite);

    /**
     * Initial call to draw the empty desk or when the game is restarted
     */
    void drawDesks();

    /**
     * To refresh the display following the workflow
     */
    void updateDisplay();
};

#endif
