#pragma once
#include <string>

class Image {
public:
	virtual void display()=0;
	virtual std::string getFileName()=0;
};