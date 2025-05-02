#pragma once
#include "Customer.h"

class IndividualCustomer : public Customer {
private:
	std::string name;
public:
	IndividualCustomer(const std::string& name);
	void receiveEmail(const std::string& message) override;
};
