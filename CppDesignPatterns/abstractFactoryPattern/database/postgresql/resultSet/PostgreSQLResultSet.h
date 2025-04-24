#pragma once
#include "../../interface/ResultSet.h"

class PostgreSQLResultSet : public ResultSet {
public:
	void getResultSets() override;
};