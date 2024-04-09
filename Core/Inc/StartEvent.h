#ifndef SRC_STARTEVENT_H_
#define SRC_STARTEVENT_H_

#include "Event.h"

class StartEvent: public Event {
public:
	StartEvent();
	virtual ~StartEvent();

	void handleEvent();
};

#endif /* SRC_STARTEVENT_H_ */
