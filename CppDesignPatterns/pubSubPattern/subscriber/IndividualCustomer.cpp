#include "IndividualCustomer.h"
#include <iostream>
#include <thread>
#include <mutex>
#include "../global/GlobalIO.h"

IndividualCustomer::IndividualCustomer(const std::string& name)
	:name(name) {
};

void IndividualCustomer::receiveEmail(const std::string& message) {
	{
		std::lock_guard<std::mutex> lock(global_io_mutex);
		std::cout << name << " is receiving email async: " << message << std::endl;
	}

	// Java와 달리 인터럽트 개념의 예외가 존재하지 않음
	std::this_thread::sleep_for(std::chrono::milliseconds(5000));

	{
		std::lock_guard<std::mutex> lock(global_io_mutex);
		std::cout << name << " finished reading email: " << message << std::endl;
	}
}