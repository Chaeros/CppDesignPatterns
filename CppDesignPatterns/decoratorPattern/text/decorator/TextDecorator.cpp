#include "TextDecorator.h"

TextDecorator::TextDecorator(Text* text)
	:decoratedText(text) {
};

std::string TextDecorator::getContent() {
	return decoratedText->getContent();
}

TextDecorator::~TextDecorator() {
	delete decoratedText;
}