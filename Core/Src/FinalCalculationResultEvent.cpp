#include "FinalCalculationResultEvent.h"
#include "DisplayEvent.h"
#include "LedEvents.h"
#include "OLED_DisplayEvent.h"



FinalCalculationResultEvent::FinalCalculationResultEvent() {}
FinalCalculationResultEvent::~FinalCalculationResultEvent() {}

void FinalCalculationResultEvent::handleEvent(){
	#ifdef DEBUG
	char msgBuffer[16];
	sprintf(msgBuffer, "Time: %lu.%lu ms\r\n", T, TIM7->CNT); //%d
	HAL_UART_Transmit(&huart3, (uint8_t*) msgBuffer, strlen(msgBuffer), HAL_MAX_DELAY);
	#endif

	sprintf(msgBuffer2, "Time: %lu.%lu ms", T, TIM7->CNT); //%d // wirte msg Buffer for LCD

	event_queue.push(new DisplayEvent(&lcd, (char*)"Messung fertig:", 0, 0));
	event_queue.push(new DisplayEvent(&lcd, (char*)msgBuffer2, 1, 0, false));

	event_queue.push(new OLED_DisplayEvent("Results:","Tau in ms:",msgBuffer2,"", OLED_Multiwrite_Big));

	//cleaning up!
	event_queue.push(new TestEventGreenBlink(0, &htim4));
	event_queue.push(new TestEventGreen(1));
	event_queue.push(new TestEventBlue(1));

	//TODO idee timer starten der dann wieder den start screen zeigt
}
