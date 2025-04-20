#include "PayPalPayment.h"
#include <iostream>

void PayPalPayment::processPayment(double amount) {
	std::cout << "PayPal: $" << amount << std::endl;
}