#pragma once
#include "../subject/BankAccount.h"
#include "../implement/RealBankAccount.h"
#include <string>

class ProxyBankAccount : public BankAccount {
private:
	RealBankAccount* realBankAccount;
	std::string userRole;
	bool hasAccess();
public:
	ProxyBankAccount(std::string userRole, double initialBalance) :
		userRole(userRole) {
		realBankAccount = new RealBankAccount(initialBalance);
	}
	~ProxyBankAccount() {
		delete realBankAccount;
	}
	void withdraw(double amount) override;
	void deposit(double amount) override;
};