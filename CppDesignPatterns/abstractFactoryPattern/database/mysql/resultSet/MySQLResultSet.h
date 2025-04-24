#pragma once
#include "../../interface/ResultSet.h"

class MySQLResultSet : public ResultSet {
public:
	void getResultSets() override;
};