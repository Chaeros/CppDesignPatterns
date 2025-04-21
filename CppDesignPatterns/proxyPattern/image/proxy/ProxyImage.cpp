#include "ProxyImage.h"

void ProxyImage::display() {
	if (!realImage) {
		realImage = new RealImage(fileName);
	}
	realImage->display();
}

std::string ProxyImage::getFileName() {
	return fileName;
}

std::string ProxyImage::getFileExtension() {
	int lastIndex = fileName.find_last_of('.');
	if (lastIndex == std::string::npos) {
		return "";
	}
	return fileName.substr(lastIndex + 1);
}