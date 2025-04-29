#include "PlainText.h"

PlainText::PlainText(std::string content) {
	this->content = content;
}

std::string PlainText::getContent() {
	return content;
}