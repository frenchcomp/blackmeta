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
 * 
 * @author      Andy O'Neil <https://github.com/aoneill01>
 * @author      Richard Déloge <richarddeloge@gmail.com>
 */
 
#include "sprites.h"

#define TRANSPARENT_COLOR 0x1f
#define RGB565 (const uint16_t)ColorMode::rgb565

const uint16_t backgroundData[] = {80,64,1,0,TRANSPARENT_COLOR,RGB565,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x44a,0x409,0x44a,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409,0x409,0x409,0x409,0x409,0x409,0x409,0x44a,0x44a,0x44a,0x44a,0x44a,0x409};
Image extBackgroundImage(backgroundData);

const uint16_t cardSpriteData[] = {9,14,2,0,TRANSPARENT_COLOR,RGB565,0x1f,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x1f,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x1f,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x1f,0x1f,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0x1f,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xcc68,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xcc68,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xcc68,0xcc68,0xcc68,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xcc68,0xfeb2,0xcc68,0xfeb2,0xcc68,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfd42,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0x1f,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0xfeb2,0x1f};
Image extCardSprite(cardSpriteData);

const uint16_t valueSpriteData[] = {3,5,28,0,TRANSPARENT_COLOR,RGB565,0x1f,0x1f,0x1f,0x1f,0x1f,0x0,0x1f,0x1f,0x0,0x1f,0x1f,0x0,0x1f,0x1f,0x0,0x1f,0x0,0x1f,0x0,0x1f,0x0,0x0,0x0,0x0,0x0,0x1f,0x0,0x0,0x1f,0x0,0x0,0x0,0x0,0x1f,0x1f,0x0,0x0,0x0,0x0,0x0,0x1f,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x1f,0x1f,0x0,0x1f,0x0,0x0,0x1f,0x1f,0x0,0x0,0x0,0x0,0x0,0x1f,0x1f,0x0,0x1f,0x0,0x0,0x0,0x0,0x1f,0x1f,0x0,0x1f,0x1f,0x0,0x0,0x0,0x0,0x0,0x1f,0x1f,0x0,0x0,0x0,0x1f,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1f,0x1f,0x0,0x0,0x0,0x0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1f,0x1f,0x0,0x1f,0x1f,0x0,0x1f,0x1f,0x0,0x1f,0x1f,0x0,0x0,0x0,0x0,0x0,0x1f,0x0,0x0,0x0,0x0,0x0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1f,0x0,0x0,0x0,0x0,0x1f,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1f,0x0,0x0,0x1f,0x0,0x0,0x1f,0x0,0x0,0x0,0x0,0x1f,0x1f,0x0,0x1f,0x1f,0x0,0x1f,0x1f,0x0,0x0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1f,0x0,0x0,0x1f,0x0,0x0,0x0,0x0,0x1f,0x0,0x1f,0x0,0x1f,0x0,0x0,0x1f,0x0,0x0,0x0,0x1f,0x0,0x1f,0x0,0x0,0x1f,0x0,0x1f,0x1f,0x1f,0x1f,0x1f,0xb8a2,0x1f,0x1f,0xb8a2,0x1f,0x1f,0xb8a2,0x1f,0x1f,0xb8a2,0x1f,0xb8a2,0x1f,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0xb8a2,0x1f,0xb8a2,0xb8a2,0x1f,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0xb8a2,0x1f,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0xb8a2,0x1f,0x1f,0xb8a2,0x1f,0x1f,0xb8a2,0x1f,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0xb8a2,0x1f,0x1f,0xb8a2,0x1f,0x1f,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0xb8a2,0x1f,0xb8a2,0x1f,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0x1f,0xb8a2,0x1f,0xb8a2,0xb8a2,0x1f,0xb8a2};
Image extValueSprite(valueSpriteData);

const uint16_t suitSpriteData[] = {5,5,4,0,TRANSPARENT_COLOR,RGB565,0x1f,0x1f,0x0,0x1f,0x1f,0x1f,0x0,0x0,0x0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1f,0x1f,0x0,0x1f,0x1f,0x1f,0x0,0x0,0x0,0x1f,0x0,0x1f,0x0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1f,0x0,0x1f,0x0,0x1f,0x1f,0x0,0x1f,0x1f,0x1f,0xb8a2,0x1f,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0x1f,0xb8a2,0x1f,0x1f,0x1f,0x1f,0xb8a2,0x1f,0x1f,0x1f,0xb8a2,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0xb8a2,0x1f,0xb8a2,0xb8a2,0xb8a2,0x1f,0x1f,0x1f,0xb8a2,0x1f,0x1f};
Image extSuitSprite(suitSpriteData);

