#include "TextMessage.h"

void TextMessage::send(const std::string& text) {
	sender->sendMessage("Text: " + text);
}