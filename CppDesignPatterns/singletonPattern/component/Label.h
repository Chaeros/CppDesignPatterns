#pragma once
#include "Component.h"
#include <string>

class Label : public Component {
private:
	std::string text;

public:
	Label(std::string text) : text(text) {}
	void display() override;
};