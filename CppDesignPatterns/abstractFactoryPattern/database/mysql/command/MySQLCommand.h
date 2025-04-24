#pragma once
#include "../../interface/Command.h"
#include <string>

class MySQLCommand : public Command {
public:
	void execute(std::string query) override;
};