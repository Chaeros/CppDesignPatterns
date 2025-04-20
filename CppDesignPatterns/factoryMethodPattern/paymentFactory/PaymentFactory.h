#pragma once
#include "../payment/Payment.h"
#include "../financialInfo/FinancialInfo.h"

class PaymentFactory {
public:
	virtual Payment* createPayment(FinancialInfo financialInfo) = 0;
};