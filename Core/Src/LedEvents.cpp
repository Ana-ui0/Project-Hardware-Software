#include "LedEvents.h"


LedEvent::LedEvent(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState, uint8_t option) :
GPIOx(GPIOx), GPIO_Pin(GPIO_Pin), PinState(PinState), option(option) {
}

LedEvent::LedEvent(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, uint8_t option) :
GPIOx(GPIOx), GPIO_Pin(GPIO_Pin), option(option) {
}

LedEvent::~LedEvent() {}


void LedEvent::handleEvent() {
	switch (this->option) {
		case 1: // LED on
			HAL_GPIO_WritePin(this->GPIOx, this->GPIO_Pin, GPIO_PIN_SET);
			break;
		case 0: // LED off
			HAL_GPIO_WritePin(this->GPIOx, this->GPIO_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}

// ------------------------------------------------------------------------------------------------------------------

LedEventBlink::LedEventBlink(uint8_t option, TIM_HandleTypeDef* htim) : option(option), htim4(htim) {}
LedEventBlink::~LedEventBlink() {}

void LedEventBlink::handleEvent(){
	switch (this->option) {
		case 1:
			HAL_TIM_Base_Start_IT(htim4);
			break;
		case 0:
			HAL_TIM_Base_Stop_IT(htim4);
			HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}

// ------------------------------------------------------------------------------------------------------------------

TestEventGreen::TestEventGreen() : LedEvent(LD1_GPIO_Port, LD1_Pin, GPIO_PIN_SET) {}
TestEventGreen::TestEventGreen(uint8_t option) : LedEvent(LD1_GPIO_Port, LD1_Pin, option) {}
TestEventGreen::~TestEventGreen() {}

// ------------------------------------------------------------------------------------------------------------------

TestEventBlue::TestEventBlue() : LedEvent(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET) {}
TestEventBlue::TestEventBlue(uint8_t option) : LedEvent(LD2_GPIO_Port, LD2_Pin, option) {}
TestEventBlue::~TestEventBlue() {}

// ------------------------------------------------------------------------------------------------------------------

TestEventRed::TestEventRed() : LedEvent(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_SET) {}
TestEventRed::TestEventRed(uint8_t option) : LedEvent(LD3_GPIO_Port, LD3_Pin, option) {}
TestEventRed::~TestEventRed() {}

// ------------------------------------------------------------------------------------------------------------------

TestEventGreenBlink::TestEventGreenBlink(uint8_t option, TIM_HandleTypeDef* htim) : LedEventBlink(option, htim) {}
TestEventGreenBlink::~TestEventGreenBlink() {}

// ------------------------------------------------------------------------------------------------------------------

TestEventBlueBlink::TestEventBlueBlink(uint8_t option, TIM_HandleTypeDef* htim) : LedEventBlink(option, htim) {}
TestEventBlueBlink::~TestEventBlueBlink() {}

// ------------------------------------------------------------------------------------------------------------------

