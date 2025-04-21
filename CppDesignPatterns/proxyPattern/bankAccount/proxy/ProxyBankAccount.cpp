#include "ProxyBankAccount.h"
#include <iostream>

bool ProxyBankAccount::hasAccess() {
	return "Admin" == userRole;
}

void ProxyBankAccount::withdraw(double amount) {
	if (hasAccess()) {
		realBankAccount->withdraw(amount);
	}
	else {
		std::cout << "Access denied." << std::endl;
	}
}

void ProxyBankAccount::deposit(double amount) {
	realBankAccount->deposit(amount);
}