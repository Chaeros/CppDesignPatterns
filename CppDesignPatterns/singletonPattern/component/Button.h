#pragma once
#include "Component.h"
#include <string>

class Button : public Component {
private:
	std::string label;

public:
	Button(std::string label):label(label){}
	void display() override;
};