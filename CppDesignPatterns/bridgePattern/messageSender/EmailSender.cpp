#include "EmailSender.h"
#include <iostream>

void EmailSender::sendMessage(const std::string& msg) {
	std::cout << "Sending email " << msg << "\n";
}