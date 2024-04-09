#include "StartEvent.h"
#include "DisplayEvent.h"
#include "waitingTask.h"
#include "StartMeasureEvent.h"
#include "LedEvents.h"
#include "OLED_DisplayEvent.h"


StartEvent::StartEvent() {}
StartEvent::~StartEvent() {}

void StartEvent::handleEvent(){
	event_queue.push(new TestEventBlue(0)); // blue off
	event_queue.push(new TestEventGreenBlink(1, &htim4)); // green blink on

	event_queue.push(new DisplayEvent(&lcd, (char*)"Messung startet", 0, 0));
	event_queue.push(new waitingTask(&reset, 1000)); // wait 1s befor continue...

	event_queue.push(new OLED_DisplayEvent("Messung","Lauft!","","",OLED_Multiwrite_Big));

	event_queue.push(new StartMeasureEvent()); // start the measurement
}
