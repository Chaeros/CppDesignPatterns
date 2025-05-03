#include <iostream>
#include "ConsoleLogger.h"

ConsoleLogger::ConsoleLogger(LogLevel level)
	:Logger(level) {
};

void ConsoleLogger::write(std::string message) {
	std::cout << "Console::Logger: " << message << std::endl;
}