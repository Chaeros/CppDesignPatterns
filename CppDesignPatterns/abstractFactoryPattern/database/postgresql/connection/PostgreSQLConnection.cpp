#include "PostgreSQLConnection.h"
#include <iostream>

void PostgreSQLConnection::open() {
	std::cout << "Opening PostgreSQL connection..." << std::endl;
}

void PostgreSQLConnection::close() {
	std::cout << "Closing PostgreSQL connection..." << std::endl;
}