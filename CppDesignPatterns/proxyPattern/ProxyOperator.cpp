#include "ProxyOperator.h"
#include "image/implement/RealImage.h"
#include "image/proxy/ProxyImage.h"
#include "bankAccount/implement/RealBankAccount.h"
#include "bankAccount/proxy/ProxyBankAccount.h"
#include <iostream>

void proxyPatternRun() {
	ProxyImage proxyImage{"chaeros project image.jpg"};
	proxyImage.display();
	proxyImage.display();
	proxyImage.display();
	std::cout<<"File Name : " << proxyImage.getFileName() << std::endl;
	std::cout <<"File extension : " << proxyImage.getFileExtension() << std::endl;
}

void proxyPatternRun2() {
	std::cout << "1. Admin User" << std::endl;
	ProxyBankAccount proxyBankAccount{"Admin",100};
	proxyBankAccount.withdraw(50);
	proxyBankAccount.withdraw(60);
	proxyBankAccount.deposit(10);
	proxyBankAccount.withdraw(60);

	std::cout << "2. Normal User" << std::endl;
	ProxyBankAccount proxyBankAccount2{ "User",100 };
	proxyBankAccount2.withdraw(50);
	proxyBankAccount2.withdraw(60);
	proxyBankAccount2.deposit(10);
	proxyBankAccount2.withdraw(60);
}