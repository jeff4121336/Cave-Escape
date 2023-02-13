#ifndef __IERG3810_TFTLCD_H
#define __IERG3810_TFTLCD_H
#include "stm32f10x.h"

void TFTLCD_Setup(void);
void IERG3810_TFTLCD_WrReg(u16 regval);
void IERG3810_TFTLCD_WrData(u16 data);
void LCD_Set9341_Parameter(void);
void IERG3810_TFTLCD_Init(void);
void IERG3810_TFTLCD_DrawDot(u16 x, u16 y, u16 color);
void IERG3810_TFTLCD_FillRectangle(u16 color, u16 start_x, u16 length_x, u16 start_y, u16 length_y);
void IERG3810_TFTLCD_SevenSegment(u16 color, u16 start_x, u16 start_y, int digit);
void IERG3810_TFTLCD_ShowChar(u16 x, u16 y, u8 ascii, u16 color, u16 bgcolor);
void IERG3810_TFTLCD_ShowPlayer(u16 x, u16 y, u8 input, u16 color, u16 bgcolor);
void IERG3810_TFTLCD_ShowBoss(u16 x, u16 y, u8 input, u16 color, u16 bgcolor);
void IERG3810_TFTLCD_ShowChinChar(u16 x, u16 y, u8 input, u16 color, u16 bgcolor);
	
#endif
