#pragma once
#include "Payment.h"
#include <string>

class PayPalPayment :public Payment {
private:
	std::string payPalEmail;

public:
	PayPalPayment(std::string payPalEmail):
		payPalEmail(payPalEmail) {}

	void processPayment(double amount) override;
};