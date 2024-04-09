/*
 * waitingTask.h
 *
 *  Created on: Dec 5, 2023
 *      Author: mickey
 */

#ifndef INC_WAITINGTASK_H_
#define INC_WAITINGTASK_H_

#include <Event.h>

class waitingTask: public Event {
private:
	bool* reset;
	uint16_t time;
public:
	waitingTask(bool* reset, uint16_t time): reset(reset), time(time){};
	virtual ~waitingTask(){};
	void handleEvent(){/*while(true){
		if(*reset == true|| HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_11) == 0) {*reset=false ;return;}
	}*/
		for (int k = 0; k < time; ++k) {
			if(*reset == true) return;
			HAL_Delay(1);
		}
	};
//	|| HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_11) == 0
//	*reset == false

//	if statement!!!
};

#endif /* INC_WAITINGTASK_H_ */
