#include "AbstractFactoryOperator.h"
#include "database/databaseClient/DatabaseClient.h"
#include "database/interface/DatabaseFactory.h"
#include "database/mysql/factory/MySQLFactory.h"
#include "database/postgresql/factory/PostgreSQLFactory.h"
#include <memory>
#include <iostream>

void abstractFactoryPatternRun() {
	{
		auto factory = std::make_unique<MySQLFactory>();
		DatabaseClient client{ *factory };
		client.perform();
	}
	
	{
		auto factory = std::make_unique<PostgreSQLFactory>();
		DatabaseClient client{ *factory };
		client.perform();
	}
}