#include "UnderlineDecorator.h"

UnderlineDecorator::UnderlineDecorator(Text* text)
	:TextDecorator(text) {
};

std::string UnderlineDecorator::getContent() {
	return "<u>" + TextDecorator::getContent() + "</u>";
}