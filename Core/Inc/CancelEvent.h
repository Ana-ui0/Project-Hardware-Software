#ifndef SRC_CANCELEVENT_H_
#define SRC_CANCELEVENT_H_

#include "Event.h"

class CancelEvent: public Event {
public:
	CancelEvent();
	virtual ~CancelEvent();

	void handleEvent();
};

#endif /* SRC_CANCELEVENT_H_ */
