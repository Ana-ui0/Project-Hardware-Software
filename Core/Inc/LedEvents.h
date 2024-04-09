/*
 * EedEvents.h
 *
 *  Created on: Jan 20, 2024
 *      Author: mickey
 */

#ifndef SRC_LEDEVENTS_H_
#define SRC_LEDEVENTS_H_

#include "Event.h"

class LedEvent: public Event {
private:
	GPIO_TypeDef* GPIOx;
	uint16_t GPIO_Pin;
	GPIO_PinState PinState;
	uint8_t option;

public:
	LedEvent(){};
	LedEvent(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState, uint8_t option);
	LedEvent(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, uint8_t option);
	virtual ~LedEvent();

	virtual void handleEvent();
};

// ------------------------------------------------------------------------------------------------------------------

class LedEventBlink: public Event {
private:
	uint8_t option;
	TIM_HandleTypeDef* htim4;
public:
	LedEventBlink(uint8_t option, TIM_HandleTypeDef* htim);
	virtual ~LedEventBlink();
	void handleEvent();
};

// ------------------------------------------------------------------------------------------------------------------

class TestEventGreen: public LedEvent {
public:
	TestEventGreen();
	TestEventGreen(uint8_t option);
	virtual ~TestEventGreen();
};

// ------------------------------------------------------------------------------------------------------------------

class TestEventBlue: public LedEvent {
public:
	TestEventBlue();
	TestEventBlue(uint8_t option);
	virtual ~TestEventBlue();
};

// ------------------------------------------------------------------------------------------------------------------

class TestEventRed: public LedEvent {
public:
	TestEventRed();
	TestEventRed(uint8_t option);
	virtual ~TestEventRed();
};


// ------------------------------------------------------------------------------------------------------------------

class TestEventGreenBlink: public LedEventBlink {
public:
	TestEventGreenBlink(uint8_t option, TIM_HandleTypeDef* htim);
	virtual ~TestEventGreenBlink();
};

class TestEventBlueBlink: public LedEventBlink {
public:
	TestEventBlueBlink(uint8_t option, TIM_HandleTypeDef* htim);
	virtual ~TestEventBlueBlink();
};

// ------------------------------------------------------------------------------------------------------------------

#endif /* SRC_LEDEVENTS_H_ */


