/*
 * This file is subject to the terms of the GFX License. If a copy of
 * the license was not distributed with this file, you can obtain one at:
 *
 *              http://ugfx.io/license.html
 */

//#ifndef _GDISP_LLD_CONFIG_H
//#define _GDISP_LLD_CONFIG_H

#if GFX_USE_GDISP
/*===========================================================================*/
/* Driver hardware support.                                                  */
/*===========================================================================*/

#define GDISP_HARDWARE_STREAM_WRITE		GFXOFF
#define GDISP_HARDWARE_STREAM_READ		GFXOFF
#define GDISP_HARDWARE_CONTROL          GFXOFF
#define GDISP_HARDWARE_DRAWPIXEL        GFXON
#define GDISP_LLD_PIXELFORMAT			GDISP_PIXELFORMAT_MONO
#define GDISP_HARDWARE_FILLS            GFXOFF

#endif	/* GFX_USE_GDISP */

//#endif	/* _GDISP_LLD_CONFIG_H */
