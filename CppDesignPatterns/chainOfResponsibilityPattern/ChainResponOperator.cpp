#include <thread>
#include <iostream>
#include "ChainResponOperator.h"
#include "logger/domain/Logger.h"
#include "logger/domain/ConsoleLogger.h"
#include "logger/domain/FileLogger.h"
#include "logger/domain/NetworkLogger.h"
#include "logger/enum/LogLevel.h"

void chainOfResponsibilityPatternRun() {
	auto loggerCHain = getChainOfLogger();

	loggerCHain->logMessage(LogLevel::INFO, "This is an information.");
	std::cout<<std::endl;
	loggerCHain->logMessage(LogLevel::DEBUG, "This is a debug information.");
	std::cout << std::endl;
	loggerCHain->logMessage(LogLevel::WARN, "This is a warning information.");
	std::cout << std::endl;
}

std::shared_ptr<Logger> getChainOfLogger() {
	auto networkLogger = std::make_shared<NetworkLogger>(LogLevel::WARN);
	auto fileLogger = std::make_shared<FileLogger>(LogLevel::DEBUG);
	auto consoleLogger = std::make_shared<ConsoleLogger>(LogLevel::INFO);

	networkLogger->setNextLogger(fileLogger);
	fileLogger->setNextLogger(consoleLogger);

	return networkLogger;
}