#include "adapterPattern/AdapterOperator.h"
#include "bridgePattern/BridgeOperator.h"
#include "singletonPattern/SingletonOperator.h"
#include "factoryMethodPattern/FactoryMethodOperator.h"
#include "proxyPattern/ProxyOperator.h"
#include "observerPattern/ObserverOperator.h"
#include "flyweightPattern/FlyweightOperator.h"
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

	std::cout << "[Prpxy Pattern Example 1]" << std::endl;
	proxyPatternRun();
	std::cout << std::endl;

	std::cout << "[Prpxy Pattern Example 2]" << std::endl;
	proxyPatternRun2();
	std::cout << std::endl;

	std::cout << "[Observer Pattern]" << std::endl;
	observerPatternRun();
	std::cout << std::endl;

	std::cout << "[Flyweight Pattern]" << std::endl;
	flyweightPatternRun();
	std::cout << std::endl;

	return 0;
}