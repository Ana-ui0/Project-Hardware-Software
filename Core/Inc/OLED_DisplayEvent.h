/*
 * DisplayEvent.h
 *
 *  Created on: Nov 28, 2023
 *      Author: mickey
 */

#ifndef SRC_OLED_DISPLAYEVENT_H_
#define SRC_OLED_DISPLAYEVENT_H_

#include "Event.h"

typedef enum{
	OLED_Write,
	OLED_Anim,
	OLED_Menue,
	OLED_CursorLeft,
	OLED_CursorRight,
	OLED_CursorUp,
	OLED_CursorDown,
	OLED_Multiwrite_Big,
	OLED_Multiwrite_Small,
	OLED_Multiwrite_Tiny,
	LCD_Write

}DISP_OP;


class OLED_DisplayEvent: public Event {
private:
	/*LCD vars*/
	char* str;

	uint8_t row, col;
	bool clear;

	/*OLED vars*/
	char* cstr;
	char* cstr2;
	char* cstr3;
	char* cstr4;
	char* cstr5;
	char* cstr6;
	char* cstr7;
	DISP_OP op;
	Bitmap Bitmaps;

public:
	OLED_DisplayEvent(char*,char*,char*,char*,DISP_OP whattodo);
	OLED_DisplayEvent(char*,char*,char*,char*,char*,char*,char*,DISP_OP whattodo);
	OLED_DisplayEvent(){};
	OLED_DisplayEvent(char*,DISP_OP whattodo);
	void DisplayInit();
	void OLED_DisplayWrite();
	void OLED_DisplayMultiwrite_Big();
	void OLED_DisplayMultiwrite_Small();
	void OLED_DisplayWaitAnimation();
	void OLED_DisplayMenue();
	void OLED_DisplayNavigateMenue(DISP_OP whattodo);
	void handleEvent();

	virtual ~OLED_DisplayEvent();

};

#endif /* SRC_OLED_DISPLAYEVENT_H_ */
