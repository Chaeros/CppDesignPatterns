#include <iostream>
#include "NetworkLogger.h"

NetworkLogger::NetworkLogger(LogLevel level)
	:Logger(level) {
};

void NetworkLogger::write(std::string message) {
	std::cout << "Network::Logger: " << message << std::endl;
}