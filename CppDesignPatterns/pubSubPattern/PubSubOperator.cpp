#include "PubsubOperator.h"
#include "publisher/MarketingDepartment.h"
#include "subscriber/Customer.h"
#include "subscriber/IndividualCustomer.h"
#include "broker/EmailDeliveryService.h"

void pubSubPatternRun() {
	auto emailService = std::make_shared<EmailDeliveryService>();
	auto marketing = std::make_shared<MarketingDepartment>(emailService, "ProductLaunch");

	auto customer1 = std::make_shared<IndividualCustomer>("Customer 1");
	auto customer2 = std::make_shared<IndividualCustomer>("Customer 2");

	emailService->subscribe("ProductLaunch", customer1);
	emailService->subscribe("ProductLaunch", customer2);

	marketing->launchCampain("New Product");

	auto customer3 = std::make_shared<IndividualCustomer>("Customer 3");
	emailService->subscribe("ProductLaunch", customer3);

	marketing->launchCampain("Update");

	emailService->shutdown();
}