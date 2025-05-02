#include "EmailDeliveryService.h"

void EmailDeliveryService::subscribe(
	const std::string& eventType,
	std::shared_ptr<Customer> customer) {
	std::lock_guard<std::mutex> lock(mtx);
	customerGroups[eventType].push_back(customer);
}

void EmailDeliveryService::sendEmails(const std::string& eventType,
									  const std::string& message) {
	std::vector<std::shared_ptr<Customer>> targets;
	{
		std::lock_guard<std::mutex> lock(mtx);
		auto it = customerGroups.find(eventType);
		if (it != customerGroups.end()) {
			targets = it->second;
		}
	}

	for (auto& customer : targets) {
		threads.emplace_back([customer, message]() {
			customer->receiveEmail(message);
		});
	}
}

void EmailDeliveryService::shutdown() {
	for (auto& t : threads) {
		if (t.joinable()) t.join();
	}
	threads.clear();
}