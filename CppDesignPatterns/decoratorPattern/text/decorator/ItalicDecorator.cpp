#include "ItalicDecorator.h"

ItalicDecorator::ItalicDecorator(Text* text)
	:TextDecorator(text) {
};

std::string ItalicDecorator::getContent() {
	return "<i>" + TextDecorator::getContent() + "</i>";
}