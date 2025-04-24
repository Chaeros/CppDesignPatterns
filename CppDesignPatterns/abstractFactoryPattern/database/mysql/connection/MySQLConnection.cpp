#include "MySQLConnection.h"
#include <iostream>

void MySQLConnection::open() {
	std::cout << "Opening MySQL connection..." << std::endl;
}

void MySQLConnection::close() {
	std::cout << "Closing MySQL connection..." << std::endl;
}