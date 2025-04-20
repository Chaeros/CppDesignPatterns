#pragma once
#include "PaymentFactory.h"

class BankTransferPaymentFactory : public PaymentFactory {
public:
	Payment* createPayment(FinancialInfo financialInfo) override;
};