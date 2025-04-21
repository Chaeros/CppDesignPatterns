#pragma once

class BankAccount {
public:
	virtual void withdraw(double amount) = 0;
	virtual void deposit(double amount) = 0;
};