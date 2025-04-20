#pragma once
#include "Payment.h"
#include <string>

class BankTransferPayment : public Payment {
private:
	std::string bankAccountNumber;

public:
	BankTransferPayment(std::string bankAccountNumber):
	bankAccountNumber(bankAccountNumber) {}

	void processPayment(double amount) override;
};