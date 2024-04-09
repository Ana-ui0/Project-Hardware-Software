#ifndef SRC_SETUPLCD_H_
#define SRC_SETUPLCD_H_

#include "Event.h"

class SetUpLcd: public Event{
private:
	bool StartUp = true;
public:
	SetUpLcd();
	virtual ~SetUpLcd();

	void handleEvent();
};

#endif /* SRC_SETUPLCD_H_ */
