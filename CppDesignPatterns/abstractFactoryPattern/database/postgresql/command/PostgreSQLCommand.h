#pragma once
#include "../../interface/Command.h"
#include <string>

class PostgreSQLCommand : public Command {
public:
	void execute(std::string query) override;
};