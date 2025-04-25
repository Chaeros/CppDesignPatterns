#pragma once

class AirportMediator {
public:
	virtual bool isRunwayAvailable() = 0;
	virtual void setIsRunwayAvailable(bool status) = 0;
};