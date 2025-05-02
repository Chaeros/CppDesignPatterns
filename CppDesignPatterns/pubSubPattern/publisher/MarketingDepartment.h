#pragma once
#include "../broker/EmailDeliveryService.h"

class MarketingDepartment {
private:
	std::shared_ptr<EmailDeliveryService> emailService;
	std::string eventType;
public:
	MarketingDepartment(
		std::shared_ptr<EmailDeliveryService> emailService,
		const std::string& eventType
	);
	void launchCampain(std::string message);
};