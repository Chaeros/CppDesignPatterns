#pragma once
#include "../airportMediator/AirportMediator.h"
#include <iostream>

class Flight {
private:
	AirportMediator* mediator;
	std::string flightNumber;
public:
	Flight(AirportMediator& mediator, std::string flightNumber);
	void land();
};