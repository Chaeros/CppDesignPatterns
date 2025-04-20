#include "PaymentFactory.h"

class CreditCardPaymentFactory : public PaymentFactory {
public:
	Payment* createPayment(FinancialInfo financialInfo) override;
};