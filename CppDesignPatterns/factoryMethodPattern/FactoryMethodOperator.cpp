#pragma once
#include "FactoryMethodOperator.h"
#include "financialInfo/FinancialInfo.h"
#include "payment/Payment.h"
#include "payment/CreditCardPayment.h"
#include "payment/PayPalPayment.h"
#include "payment/BankTransferPayment.h"
#include "paymentFactory/CreditCardPaymentFactory.h"
#include "paymentFactory/PayPalPaymentFactory.h"
#include "paymentFactory/BankTransferPaymentFactory.h"
#include <string>
#include <memory>

void factoryMethodPatternRun() {

	std::string creditCardNumber="123456789";
	std::string payPalEmail="aaa@bbb.com";
	std::string bankAccountNumber="a1b2c3d4e5";
	FinancialInfo info{ creditCardNumber,payPalEmail,bankAccountNumber };

	{
		auto factory = std::make_unique<CreditCardPaymentFactory>();
		auto payment = factory->createPayment(info);
		payment->processPayment(100.0);
	}

	{
		auto factory = std::make_unique<PayPalPaymentFactory>();
		auto payment = factory->createPayment(info);
		payment->processPayment(200.0);
	}

	{
		auto factory = new BankTransferPaymentFactory();
		auto payment = factory->createPayment(info);
		payment->processPayment(300.0);
	}
}