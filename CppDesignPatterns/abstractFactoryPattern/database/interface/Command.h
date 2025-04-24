#pragma once
#include <string>

class Command {
public:
	virtual void execute(std::string query) = 0;
};