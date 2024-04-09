#include "DisplayEvent.h"

DisplayEvent::DisplayEvent(LCD_HandleTypeDef* lcd, char* str, uint8_t row, uint8_t col, bool clear):
lcd(lcd), str(str), row(row), col(col), clear(clear) {}

DisplayEvent::~DisplayEvent() {}

void DisplayEvent::handleEvent(){
		if(this->clear == true) LCD_Clear(lcd);
		HAL_Delay(10);
		LCD_SetCursor(lcd, row, col);
		HAL_Delay(10);
		LCD_Printf(lcd, str);
		HAL_Delay(10);
}
