/*
 * CalculationEvent.h
 *
 *  Created on: Nov 28, 2023
 *      Author: mickey
 */

#ifndef SRC_CALCULATIONEVENT_H_
#define SRC_CALCULATIONEVENT_H_

#include "Event.h"

class CalculationEvent : public Event {
public:
	CalculationEvent();
	~CalculationEvent();

//	void calculate();
	void handleEvent() override;
};

#endif /* SRC_CALCULATIONEVENT_H_ */
