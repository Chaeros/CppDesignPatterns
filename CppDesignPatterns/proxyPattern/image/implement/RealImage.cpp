#include "RealImage.h"
#include <iostream>

void RealImage::loadFromDisk() {
	std::cout << "Loading " << fileName << std::endl;
}

void RealImage::display() {
	std::cout << "Displaying " << fileName << std::endl;
}

std::string RealImage::getFileName() {
	return fileName;
}