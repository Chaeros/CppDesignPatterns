#pragma once
#include "../subject/Image.h"
#include <string>

class RealImage : public Image {
private:
	std::string fileName;
	void loadFromDisk();
public:
	RealImage(std::string fileName) : fileName(fileName) {
		loadFromDisk();
	}
	void display() override;
	std::string getFileName() override;
};