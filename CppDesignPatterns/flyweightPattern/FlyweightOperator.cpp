#include "FlyweightOperator.h"
#include "font/factory/FontFactory.h"
#include "font/implement/ConcreteFont.h"
#include "font/interface/Font.h"

void flyweightPatternRun() {
	auto f1 = FontFactory::getFont("hello c++", 10, "black");
	auto f2 = FontFactory::getFont("hello c++", 10, "black");
	auto f3 = FontFactory::getFont("nice c++",10,"blue");
	auto f4 = FontFactory::getFont("hello c++", 10, "black");
	auto f5 = FontFactory::getFont("hello c++", 10, "black");
	auto f6 = FontFactory::getFont("nice c++", 10, "blue");

	f1->apply("hihi");
}