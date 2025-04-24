#include "PostgreSQLCommand.h"
#include <iostream>

void PostgreSQLCommand::execute(std::string query) {
	std::cout << "Executing PostgreSQL query : " << query << std::endl;
}