#include <iostream>
#include "adapterPattern/AdapterOperator.h"
#include "bridgePattern/BridgeOperator.h"
#include "singletonPattern/SingletonOperator.h"
#include "factoryMethodPattern/FactoryMethodOperator.h"
#include "proxyPattern/ProxyOperator.h"
#include "observerPattern/ObserverOperator.h"
#include "flyweightPattern/FlyweightOperator.h"
#include "abstractFactoryPattern/AbstractFactoryOperator.h"
#include "mediatorPattern/MediatorOperator.h"
#include "builderPattern/BuilderOperator.h"
#include "decoratorPattern/DecoratorOperator.h"
#include "commandPattern/CommandOperator.h"
#include "pubSubPattern/PubsubOperator.h"
#include "chainOfResponsibilityPattern/ChainResponOperator.h"
#include "specificationPattern/SpecificationOperator.h"

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

	std::cout << "[Abstract Factory Pattern]" << std::endl;
	abstractFactoryPatternRun();
	std::cout << std::endl;

	std::cout << "[Mediator Pattern]" << std::endl;
	mediatorPatternRun();
	std::cout << std::endl;

	std::cout << "[Builder Pattern]" << std::endl;
	builderPatternRun();
	std::cout << std::endl;

	std::cout << "[Decorator Pattern]" << std::endl;
	decoratorPatternRun();
	std::cout << std::endl;

	std::cout << "[Command Pattern]" << std::endl;
	commandPatternRun();
	std::cout << std::endl;

	//std::cout << "[Pub Sub Pattern]" << std::endl;
	//pubSubPatternRun();
	//std::cout << std::endl;

	std::cout << "[Chain Of Responsibility Pattern]" << std::endl;
	chainOfResponsibilityPatternRun();
	std::cout << std::endl;

	std::cout << "[Specification Pattern]" << std::endl;
	specificationPatternRun();
	std::cout << std::endl;

	return 0;
}