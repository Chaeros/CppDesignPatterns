#include "MySQLCommand.h"
#include <iostream>

void MySQLCommand::execute(std::string query) {
	std::cout << "Executing  MySQL query : " << query << std::endl;
}