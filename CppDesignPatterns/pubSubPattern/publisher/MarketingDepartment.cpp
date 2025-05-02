#include "MarketingDepartment.h"
#include <iostream>
#include <mutex>
#include "../global/GlobalIO.h"

MarketingDepartment::MarketingDepartment(std::shared_ptr<EmailDeliveryService> emailService, const std::string& eventType)
	:emailService(std::move(emailService)), eventType(eventType) {
}

void MarketingDepartment::launchCampain(std::string message) {
	std::lock_guard<std::mutex> lock(global_io_mutex);
	std::cout << "Launching campain: " << message << std::endl;
	emailService->sendEmails(eventType, message);
}