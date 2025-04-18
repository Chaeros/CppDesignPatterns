#include "SMSSender.h"
#include <iostream>

void SMSSender::sendMessage(const std::string& msg) {
	std::cout << "Sending sms " << msg << "\n";
}