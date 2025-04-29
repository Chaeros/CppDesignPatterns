#include "BoldDecorator.h"

BoldDecorator::BoldDecorator(Text* text)
	: TextDecorator(text) {};

std::string BoldDecorator::getContent() {
	return "<b>" + TextDecorator::getContent() + "</b>";
}