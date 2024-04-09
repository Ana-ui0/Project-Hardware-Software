/*
 * Events.h
 *
 *  Created on: Nov 28, 2023
 *      Author: mickey
 */

#ifndef SRC_EVENT_H_
#define SRC_EVENT_H_

#include "main.h"
#include "lcd.h"
#include <string>
#include "queue"

#include "../CustomLib/ssd1306.h"
#include "../CustomLib/Bitmap.h"


class Event {
public:
	virtual void handleEvent(){};
	virtual ~Event(){};
};

#endif /* SRC_EVENT_H_ */


extern std::queue<Event*> event_queue;

extern UART_HandleTypeDef huart3;
extern TIM_HandleTypeDef htim4;
extern TIM_HandleTypeDef htim7;
extern LCD_HandleTypeDef lcd;

extern bool reset;

extern uint32_t t0, t3T, T;
extern uint16_t tim7Time_ms;
extern char msgBuffer2[16];
extern uint16_t adc_buf[1];
