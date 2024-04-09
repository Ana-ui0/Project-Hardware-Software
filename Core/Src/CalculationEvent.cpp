#include <CalculationEvent.h>
#include "FinalCalculationResultEvent.h"

CalculationEvent::CalculationEvent(){};
CalculationEvent::~CalculationEvent(){};

void CalculationEvent::handleEvent() {
	T = (t3T - t0)/3.0; 									// yeah not that much but important
	event_queue.push(new FinalCalculationResultEvent());	// ...
}
