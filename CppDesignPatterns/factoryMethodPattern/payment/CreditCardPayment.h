#pragma once
#include "Payment.h"
#include <string>

class CreditCardPayment :public Payment {
private:
	std::string creditCardNumber;
	
public:
	CreditCardPayment(std::string creditCardNumber) :
		creditCardNumber(creditCardNumber) {}

	void processPayment(double amount) override;
};