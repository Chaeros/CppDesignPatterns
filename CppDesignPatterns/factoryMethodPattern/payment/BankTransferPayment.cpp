#include "BankTransferPayment.h"
#include <iostream>

void BankTransferPayment::processPayment(double amount) {
	std::cout << "Bank transfer: $" << amount << std::endl;
}