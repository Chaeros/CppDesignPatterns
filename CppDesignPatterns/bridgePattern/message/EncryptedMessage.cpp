#include "EncryptedMessage.h"
#include <algorithm>

std::string EncryptedMessage::encrypt(const std::string& text) {
	return std::string(text.rbegin(), text.rend());
}

void EncryptedMessage::send(const std::string& text) {
	sender->sendMessage("Encrypted: " + encrypt(text));
}