#pragma once
#include "../../interface/DatabaseFactory.h"

class PostgreSQLFactory : public DatabaseFactory {
public:
	Connection* createConnection() override;
	Command* createCommand() override;
	ResultSet* createResultSet() override;
};