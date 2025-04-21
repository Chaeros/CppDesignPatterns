#pragma once
#include "../subject/BankAccount.h"

class RealBankAccount : public BankAccount {
private:
	double balance;
public:
	RealBankAccount(double balance) :balance(balance) {}
	void withdraw(double amount) override;
	void deposit(double amount) override;
};