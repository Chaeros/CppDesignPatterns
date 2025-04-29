#include <iostream>
#include <memory>
#include "DecoratorOperator.h"
#include "text/domain/PlainText.h"
#include "text/domain/Text.h"
#include "text/decorator/TextDecorator.h"
#include "text/decorator/BoldDecorator.h"
#include "text/decorator/ItalicDecorator.h"
#include "text/decorator/UnderlineDecorator.h"

void decoratorPatternRun() {
	Text* text = new PlainText("Hi, i'm a chaeros~!");
	
	std::cout << text->getContent() << std::endl;

	text = new BoldDecorator(text);
	std::cout << text->getContent() << std::endl;

	text = new ItalicDecorator(text);
	std::cout << text->getContent() << std::endl;

	text = new UnderlineDecorator(text);
	std::cout << text->getContent() << std::endl;
	
	delete text;
}