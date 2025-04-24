#pragma once
#include "../interface/Connection.h"
#include "../interface/Command.h"
#include "../interface/ResultSet.h"
#include "../interface/DatabaseFactory.h"

class DatabaseClient {
private:
	Connection* connection;
	Command* command;
	ResultSet* resultSet;
public:
	DatabaseClient(DatabaseFactory& databaseFactory)
		:connection(databaseFactory.createConnection()),
		command(databaseFactory.createCommand()),
		resultSet(databaseFactory.createResultSet()){ }

	~DatabaseClient() {
		delete connection;
		delete command;
		delete resultSet;
	}
	void perform();		
};