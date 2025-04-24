#pragma once
#include "../../interface/Connection.h"

class PostgreSQLConnection : public Connection {
public:
	void open() override;
	void close() override;
};