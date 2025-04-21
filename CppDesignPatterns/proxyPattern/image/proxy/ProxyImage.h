#pragma once
#include "../subject/Image.h"
#include "../implement/RealImage.h"

class ProxyImage : public Image {
private:
	RealImage* realImage;
	std::string fileName;
public:
	ProxyImage(std::string fileName):realImage(nullptr), fileName(fileName){}
	~ProxyImage() {
		delete realImage;
	}
	void display() override;
	std::string getFileName() override;
	std::string getFileExtension();
};