#pragma once
#include "Connection.h"
#include "Command.h"
#include "ResultSet.h"

class DatabaseFactory {
public:
	virtual Connection* createConnection() = 0;
	virtual Command* createCommand() = 0;
	virtual ResultSet* createResultSet() = 0;
};