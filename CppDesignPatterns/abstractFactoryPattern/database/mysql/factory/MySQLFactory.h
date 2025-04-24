#pragma once
#include "../../interface/DatabaseFactory.h"
#include "../connection/MySQLConnection.h"
#include "../command/MySQLCommand.h"
#include "../resultSet/MySQLResultSet.h"

class MySQLFactory : public DatabaseFactory {
public:
	Connection* createConnection() override;
	Command* createCommand() override;
	ResultSet* createResultSet() override;
};