#include "Flight.h"
#include <iostream>

Flight::Flight(AirportMediator& mediator, std::string flightNumber)
	:mediator(&mediator),flightNumber(flightNumber){ }

void Flight::land() {
	if (mediator->isRunwayAvailable()) {
		std::cout << "Flight" << flightNumber << " is landing." << std::endl;
		mediator->setIsRunwayAvailable(false);
	}
	else {
		std::cout << "Flight " << flightNumber << " is waiting to land." << std::endl;
	}
}