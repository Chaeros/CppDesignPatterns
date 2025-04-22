#pragma once
#include "Observer.h"

class NewsChannel : public Observer {
private:
	std::string name;
public:
	NewsChannel(std::string name)
		:name(name){}
	void update(std::string news) override;
};