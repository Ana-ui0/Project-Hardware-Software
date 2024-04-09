#include "SetUpLcd.h"

#include "DisplayEvent.h"
#include "LedEvents.h"
#include "OLED_DisplayEvent.h"

SetUpLcd::SetUpLcd() {}
SetUpLcd::~SetUpLcd() {}

void SetUpLcd::handleEvent() {
	if(StartUp == true) { // one time exec
		StartUp = false;
		LCD_Begin(&lcd);
	}
	event_queue.push(new TestEventGreen(1)); // green led on



	ssd1306_Init();
	ssd1306_Fill(Black);
	ssd1306_SetCursor(0, 0);
	ssd1306_UpdateScreen();

	event_queue.push(new OLED_DisplayEvent("Welcome!","Press Blue","Button","",OLED_Multiwrite_Big));

	event_queue.push(new DisplayEvent(&lcd, (char*)"Bereit fuer ", 0, 0, true));
	event_queue.push(new DisplayEvent(&lcd, (char*)"eine Messung!", 1, 0, false));
}
