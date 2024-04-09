/*
 * DisplayEvent.h
 *
 *  Created on: Nov 28, 2023
 *      Author: mickey
 */

#ifndef SRC_DISPLAYEVENT_H_
#define SRC_DISPLAYEVENT_H_

#include "Event.h"


class DisplayEvent: public Event {
private:
	LCD_HandleTypeDef* lcd;
	char* str;
	uint8_t row, col;
	bool clear;
public:
	DisplayEvent(LCD_HandleTypeDef* lcd, char* str, uint8_t row, uint8_t col, bool clear = true);
	virtual ~DisplayEvent();
	void handleEvent();
};

#endif /* SRC_DISPLAYEVENT_H_ */
