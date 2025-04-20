#include "CreditCardPaymentFactory.h"
#include "../payment/CreditCardPayment.h"

Payment* CreditCardPaymentFactory::createPayment(FinancialInfo financialInfo) {
	return new CreditCardPayment(financialInfo.getCreditCardNumber());
}