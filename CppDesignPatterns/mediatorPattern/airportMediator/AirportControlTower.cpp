#include "AirportControlTower.h"

bool AirportControlTower::isRunwayAvailable() {
	std::lock_guard<std::mutex> lock(runwayMutex);
	return m_isRunwayAvailable;
}

void AirportControlTower::setIsRunwayAvailable(bool status) {
	std::lock_guard<std::mutex> lock(runwayMutex);
	m_isRunwayAvailable = status;
}