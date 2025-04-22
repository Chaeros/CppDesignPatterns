#pragma once
#include <string>

class Observer {
public:
	virtual void update(std::string news) = 0;
};