#include "PostgreSQLFactory.h"
#include "../connection/PostgreSQLConnection.h"
#include "../command/PostgreSQLCommand.h"
#include "../resultSet/PostgreSQLResultSet.h"

Connection* PostgreSQLFactory::createConnection() {
	return new PostgreSQLConnection();
}

Command* PostgreSQLFactory::createCommand() {
	return new PostgreSQLCommand();
}

ResultSet* PostgreSQLFactory::createResultSet() {
	return new PostgreSQLResultSet();
}