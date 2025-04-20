#include "PayPalPaymentFactory.h"
#include "../payment/PayPalPayment.h"

Payment* PayPalPaymentFactory::createPayment(FinancialInfo financialInfo) {
	return new PayPalPayment(financialInfo.getPayPalEmail());
}