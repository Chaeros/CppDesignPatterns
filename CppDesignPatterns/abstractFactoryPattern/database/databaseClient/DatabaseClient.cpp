#include "DatabaseClient.h"
#include <iostream>

void DatabaseClient::perform() {
	connection->open();
	command->execute("SELECT * FROM books WHERE id=1;");
	resultSet->getResultSets();
	connection->close();
}