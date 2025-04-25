#include "MediatorOperator.h"
#include "airportMediator/AirportMediator.h"
#include "airportMediator/AirportControlTower.h"
#include "flight/Flight.h"
#include "runway/Runway.h"
#include <memory>

void mediatorPatternRun() {
	auto mediator = std::make_unique<AirportControlTower>();
	Flight flight1{ *mediator, "ChaerosFlight1"};
	Flight flight2{ *mediator, "ChaerosFlight2"};
	Runway runway{ *mediator };

	flight1.land();
	flight2.land();
	runway.clear();
	runway.clear();
	flight2.land();
}