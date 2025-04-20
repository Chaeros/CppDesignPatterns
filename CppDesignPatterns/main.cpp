#include "adapterPattern/AdapterOperator.h"
#include "bridgePattern/BridgeOperator.h"
#include "singletonPattern/SingletonOperator.h"
#include "factoryMethodPattern/FactoryMethodOperator.h"
#include <iostream>

int main() {
	std::cout << "[Adapter Pattern]" << std::endl;
	adapterPatternRun();
	std::cout<<std::endl;

	std::cout << "[Bridge Pattern]" << std::endl;
	bridgePatternRun();
	std::cout << std::endl;

	std::cout << "[Singleton Pattern]" << std::endl;
	singletonPatternRun();
	std::cout << std::endl;

	std::cout << "[Factory Method Pattern]" << std::endl;
	factoryMethodPatternRun();
	std::cout << std::endl;

	return 0;
}