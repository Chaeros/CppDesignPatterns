#include "NewsChannel.h"
#include <iostream>

void NewsChannel::update(std::string news) {
	std::cout << name << " received news : " << news << std::endl;
}