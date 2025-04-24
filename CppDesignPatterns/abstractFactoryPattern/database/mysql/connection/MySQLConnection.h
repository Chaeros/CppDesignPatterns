#pragma once
#include "../../interface/Connection.h"

class MySQLConnection : public Connection {
public:
	void open() override;
	void close() override;
};