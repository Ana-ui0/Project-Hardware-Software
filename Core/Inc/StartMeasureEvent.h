/*
 * StartMeasureEvent.h
 *
 *  Created on: Nov 28, 2023
 *      Author: mickey
 */

#ifndef SRC_STARTMEASUREEVENT_H_
#define SRC_STARTMEASUREEVENT_H_

#include "Event.h"

extern ADC_HandleTypeDef hadc1;

class StartMeasureEvent: public Event {
public:
  StartMeasureEvent();
  virtual ~StartMeasureEvent();
  void handleEvent();

};

#endif /* SRC_STARTMEASUREEVENT_H_ */
