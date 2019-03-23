/*
 *--------------------------------------
 * Program Name: RubEX
 * Author: LogicalJoe, who else?
 * Copyright: Copyright (C) 2017-2019 LogicalJoe
 * License: LJL General Public License
 * Description: v2.3 of the original RubEX program (which was in ICE) in C
 *--------------------------------------
 */
/* Keep these headers */
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <tice.h>

/* Standard headers (recommended) */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <graphx.h>
//#include <keypadc.h>
//#include <fileioc.h>

/* Put all your globals here */


void main(void) {
    /* Fill in the body of the main function here */
    gfx_Begin(gfx_8bpp);
    gfx_ZeroScreen();
    gfx_SetTextTransparentColor(0);
    gfx_SetTextFGColor(255);
    gfx_SetTextBGColor(0);
    gfx_PrintStringXY("LCD OFF",135,116);
    delay(10000);
    while (!os_GetCSC());
    gfx_End();
}
