#include "ProxyOperator.h"
#include "image/implement/RealImage.h"
#include "image/proxy/ProxyImage.h"
#include <iostream>

void proxyPatternRun() {
	ProxyImage proxyImage{"chaeros project image.jpg"};
	proxyImage.display();
	proxyImage.display();
	proxyImage.display();
	std::cout<<"File Name : " << proxyImage.getFileName() << std::endl;
	std::cout <<"File extension : " << proxyImage.getFileExtension() << std::endl;
}