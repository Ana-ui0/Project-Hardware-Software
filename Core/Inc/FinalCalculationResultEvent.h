/*
 * FinalCalculationResultEvent.h
 *
 *  Created on: Nov 28, 2023
 *      Author: mickey
 */

#ifndef SRC_FINALCALCULATIONRESULTEVENT_H_
#define SRC_FINALCALCULATIONRESULTEVENT_H_

#include "Event.h"

class FinalCalculationResultEvent: public Event {
public:
	FinalCalculationResultEvent();
	virtual ~FinalCalculationResultEvent();
	void handleEvent();
};

#endif /* SRC_FINALCALCULATIONRESULTEVENT_H_ */
