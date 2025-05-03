#pragma once
#include <thread>
#include "logger/domain/Logger.h"

void chainOfResponsibilityPatternRun();

std::shared_ptr<Logger> getChainOfLogger();