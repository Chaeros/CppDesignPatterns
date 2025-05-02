#pragma once
#include <string>

class Customer {
public:
	virtual void receiveEmail(const std::string& message) = 0;
};