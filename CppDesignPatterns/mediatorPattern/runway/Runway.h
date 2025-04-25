#pragma once
#include "../airportMediator/AirportMediator.h"

class Runway {
private:
	AirportMediator* mediator;
public:
	Runway(AirportMediator& mediator);
	void clear();
};