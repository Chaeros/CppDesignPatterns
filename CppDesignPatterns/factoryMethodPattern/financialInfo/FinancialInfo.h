#pragma once
#include <string>

class FinancialInfo {
private:
	std::string creditCardNumber;
	std::string payPalEmail;
	std::string bankAccountNumber;

public:
	FinancialInfo(
		std::string creditCardNumber,
		std::string payPalEmail,
		std::string bankAccountNumber
	) : creditCardNumber(creditCardNumber),
		payPalEmail(payPalEmail),
		bankAccountNumber(bankAccountNumber) {}

	std::string getCreditCardNumber();
	std::string getPayPalEmail();
	std::string getBankAccountNumber();
};