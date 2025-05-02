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

	// Java�� �޸� ���ͷ�Ʈ ������ ���ܰ� �������� ����
	std::this_thread::sleep_for(std::chrono::milliseconds(5000));

	{
		std::lock_guard<std::mutex> lock(global_io_mutex);
		std::cout << name << " finished reading email: " << message << std::endl;
	}
}