#include "AirportMediator.h"
#include <mutex>

class AirportControlTower : public AirportMediator {
private:
	bool m_isRunwayAvailable = true;
	std::mutex runwayMutex;
public:
	bool isRunwayAvailable() override;
	void setIsRunwayAvailable(bool status) override;
};