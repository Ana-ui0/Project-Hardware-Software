#include "CancelEvent.h"
#include "DisplayEvent.h"
#include "waitingTask.h"
#include "LedEvents.h"
#include "OLED_DisplayEvent.h"

CancelEvent::CancelEvent() {}
CancelEvent::~CancelEvent() {}

void CancelEvent::handleEvent() {
	bool t = false;
	// uh yeah naah
	event_queue.push(new TestEventRed(1));
	event_queue.push(new DisplayEvent(&lcd, (char*)"STOP!", 0, 0));
	event_queue.push(new waitingTask(&t, 1000));
	event_queue.push(new DisplayEvent(&lcd, (char*)"Cleaning Up!", 0, 0));
	event_queue.push(new waitingTask(&t,1000));
	event_queue.push(new TestEventGreenBlink(0, &htim4));
	event_queue.push(new LedEvent(GPIOB, LD1_Pin | LD2_Pin | LD3_Pin, 0));
	event_queue.push(new TestEventGreen(1));
	event_queue.push(new DisplayEvent(&lcd, (char*)"Bereit!", 0, 0));
	event_queue.push(new DisplayEvent(&lcd, (char*)"Btn -> Start", 1, 0, false));


	event_queue.push(new OLED_DisplayEvent("!!!!!!!!!!","Aborting","!!!!!!!!!!","",OLED_Multiwrite_Big));
	event_queue.push(new OLED_DisplayEvent("!!!!!!!!!!","Cleaning Up","","",OLED_Multiwrite_Big));
	event_queue.push(new OLED_DisplayEvent("Ready","Blue Btn","->Restart","",OLED_Multiwrite_Big));
}
