#include "BankTransferPaymentFactory.h"
#include "../payment/BankTransferPayment.h"

Payment* BankTransferPaymentFactory::createPayment(FinancialInfo financialInfo) {
	return new BankTransferPayment(financialInfo.getBankAccountNumber());
}