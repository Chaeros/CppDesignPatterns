#pragma once
#include "PaymentFactory.h"

class PayPalPaymentFactory : public PaymentFactory {
public:
	Payment* createPayment(FinancialInfo financialInfo) override;
};