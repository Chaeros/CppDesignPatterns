#include "RealBankAccount.h"
#include <iostream>

void RealBankAccount::withdraw(double amount) {
	if (balance >= amount) {
		balance -= amount;
		std::cout << amount << " withdraw. Current balance: " << balance << std::endl;
	}
	else {
		std::cout << "Insufficiant balance." << std::endl;
	}
}

void RealBankAccount::deposit(double amount) {
	balance += amount;
	std::cout << amount << " deposited. Current balance: " << balance << std::endl;
}