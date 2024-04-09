/*
 * DisplayEvent.cpp
 *
 *  Created on: Nov 28, 2023
 *      Author: mickey
 */

#include <OLED_DisplayEvent.h>

OLED_DisplayEvent::OLED_DisplayEvent(char* str,char* str2,char* str3,char* str4,char* str5,char* str6,char* str7,DISP_OP initop):
		cstr(str),
		cstr2(str2),
		cstr3(str3),
		cstr4(str4),
		cstr5(str5),
		cstr6(str6),
		cstr7(str7),
		op(initop){

}

OLED_DisplayEvent::OLED_DisplayEvent(char* str,char* str2,char* str3,char* str4,DISP_OP initop):
		cstr(str),
		cstr2(str2),
		cstr3(str3),
		cstr4(str4),
		op(initop){

}


OLED_DisplayEvent::OLED_DisplayEvent(char* str,DISP_OP initop) {
	// string zu char*
	//std::vector<char> cstr_vec(str.c_str(), str.c_str() + str.size() + 1);
	// Access the mutable C string
	//cstr = cstr_vec.data();
	cstr =str;
	op = initop;



}

OLED_DisplayEvent::~OLED_DisplayEvent() {
	// Remember to delete[] cstr when done!
		//delete[] cstr;
}

void OLED_DisplayEvent::DisplayInit(){

	//clear OLED and reset Cursor
	ssd1306_Fill(Black);
	ssd1306_SetCursor(0, 0);

}


void OLED_DisplayEvent::OLED_DisplayWrite(){


	ssd1306_WriteString(cstr, Font_11x18, White);
	ssd1306_UpdateScreen();

}

void OLED_DisplayEvent::OLED_DisplayMultiwrite_Big(){

	ssd1306_WriteString(cstr, Font_11x18, White);
	ssd1306_SetCursor(0, 18);
	ssd1306_WriteString(cstr2, Font_11x18, White);
	ssd1306_SetCursor(0, 36);
	ssd1306_WriteString(cstr3, Font_11x18, White);
	ssd1306_SetCursor(0, 54);
	ssd1306_WriteString(cstr4, Font_11x18, White);
	ssd1306_UpdateScreen();

}

void OLED_DisplayEvent::OLED_DisplayMultiwrite_Small(){

	ssd1306_WriteString(cstr, Font_7x10, White);
	ssd1306_SetCursor(0, 10);
	ssd1306_WriteString(cstr2, Font_7x10, White);
	ssd1306_SetCursor(0, 20);
	ssd1306_WriteString(cstr3, Font_7x10, White);
	ssd1306_SetCursor(0, 30);
	ssd1306_WriteString(cstr4, Font_7x10, White);
	ssd1306_SetCursor(0, 40);
	ssd1306_WriteString(cstr5, Font_7x10, White);
	ssd1306_SetCursor(0, 50);
	ssd1306_WriteString(cstr6, Font_7x10, White);
	ssd1306_SetCursor(0, 60);
	ssd1306_WriteString(cstr7, Font_7x10, White);
	ssd1306_UpdateScreen();

}


void OLED_DisplayEvent::OLED_DisplayWaitAnimation(){

	for (int i=0; i<28;i++){
		HAL_Delay(50);
		ssd1306_Fill(Black);
		ssd1306_SetCursor(0, 0);
		ssd1306_DrawBitmap(0, 0, Bitmaps.Waiting_allArray[i], 128, 64, White);
		ssd1306_UpdateScreen();
	}

}

void OLED_DisplayEvent::OLED_DisplayMenue(){
	//clear OLED and reset Cursor
		ssd1306_Fill(Black);
		ssd1306_SetCursor(0, 0);
		ssd1306_WriteString("Inserted Values:", Font_6x8, White);
		ssd1306_SetCursor(0, 13);
		ssd1306_WriteString("R: 100", Font_11x18, White);
		ssd1306_SetCursor(0, 30);
		ssd1306_WriteString("C: 100F", Font_11x18, White);
		ssd1306_SetCursor(0, 50);
		ssd1306_WriteString("Change values?", Font_6x8, White);
		ssd1306_UpdateScreen();
		ssd1306_SetCursor(105, 15);
		ssd1306_Line(100, 0, 100, 64, White);
		ssd1306_WriteString("Yes", Font_7x10, White);
		ssd1306_SetCursor(105, 32);
		ssd1306_WriteString("No", Font_7x10, White);

		ssd1306_Line(105, 27, 128, 27, White); //User "Cursor"

		ssd1306_UpdateScreen();


}

void OLED_DisplayEvent::OLED_DisplayNavigateMenue(DISP_OP op){
	switch (op){
		case OLED_CursorDown:
			ssd1306_Line(105, 27, 128, 27, Black);
			ssd1306_Line(105, 44, 128, 44, White);
			break;
		case OLED_CursorLeft:
			break;
		case OLED_CursorRight:
			break;
		case OLED_CursorUp:
			ssd1306_Line(105, 27, 128, 27, Black);
			ssd1306_Line(105, 44, 128, 44, White);
			break;

	};
	ssd1306_UpdateScreen();


}






void OLED_DisplayEvent::handleEvent(){
	switch (op){
		case OLED_Write:
			this->DisplayInit();
			OLED_DisplayWrite();
			break;
		case OLED_Menue:
			this->DisplayInit();
			OLED_DisplayMenue();
			break;
		case OLED_Anim:
			this->DisplayInit();
			OLED_DisplayWaitAnimation();
			break;
		case OLED_CursorDown:
			OLED_DisplayNavigateMenue(op);
			break;
		case OLED_CursorLeft:
			OLED_DisplayNavigateMenue(op);
			break;
		case OLED_CursorRight:
			OLED_DisplayNavigateMenue(op);
			break;
		case OLED_CursorUp:
			OLED_DisplayNavigateMenue(op);
			break;
		case OLED_Multiwrite_Big:
			this->DisplayInit();
			OLED_DisplayMultiwrite_Big();
			break;
		case OLED_Multiwrite_Small:
			this->DisplayInit();
			this->OLED_DisplayMultiwrite_Small();
			break;

		}

}

