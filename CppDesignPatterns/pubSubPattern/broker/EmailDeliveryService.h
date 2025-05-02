#pragma once
#include <unordered_map>
#include <string>
#include <vector>
#include <mutex>
#include <thread>
#include <memory>
#include "../subscriber/Customer.h"

class EmailDeliveryService {
private:
	std::unordered_map<std::string, std::vector<std::shared_ptr<Customer>>> customerGroups;
	std::vector<std::thread> threads;
	std::mutex mtx;
public:
	void subscribe(const std::string& eventType, std::shared_ptr<Customer> customer);
	void sendEmails(const std::string& eventType, const std::string& message);
	void shutdown();
};