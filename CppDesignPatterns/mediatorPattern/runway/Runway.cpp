#include "Runway.h"
#include <iostream>

Runway::Runway(AirportMediator& mediator)
	:mediator(&mediator) { }

void Runway::clear() {
	if (mediator->isRunwayAvailable()) {
		std::cout << "Runway is using." << std::endl;
	}
	else {
		std::cout << "Runway is clear." << std::endl;
		mediator->setIsRunwayAvailable(true);
	}
}