#include "MySQLFactory.h"
#include "../connection/MySQLConnection.h"
#include "../command/MySQLCommand.h"
#include "../resultSet/MySQLResultSet.h"

Connection* MySQLFactory::createConnection() {
	return new MySQLConnection();
}

Command* MySQLFactory::createCommand() {
	return new MySQLCommand();
}

ResultSet* MySQLFactory::createResultSet() {
	return new MySQLResultSet();
}