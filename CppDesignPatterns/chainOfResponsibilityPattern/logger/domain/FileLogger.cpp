#include <iostream>
#include "FileLogger.h"

FileLogger::FileLogger(LogLevel level)
	:Logger(level) {
};

void FileLogger::write(std::string message) {
	std::cout << "File::Logger: " << message << std::endl;
}