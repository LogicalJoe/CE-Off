/*
 *--------------------------------------
 * Program Name: Off
 * Author: LogicalJoe
 * Copyright: Copyright (C) 2019 LogicalJoe
 * License: LJL General Public License
 * Description:
 *--------------------------------------
 */

/* Keep these headers */
#include <tice.h>

#define LCD_POWER (1 << 11)

void main(void) {
    /* Fill in the body of the main function here */
    uint8_t A=lcd_BacklightLevel;
    lcd_BacklightLevel=0xFF;
    lcd_Control &= ~LCD_POWER;
    delay(10000);
    while (54!=os_GetCSC());
    lcd_BacklightLevel=A;
    lcd_Control |= LCD_POWER;
}
