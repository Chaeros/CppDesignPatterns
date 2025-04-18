#pragma once
#include "Message.h"

class EncryptedMessage : public Message {
public:
	EncryptedMessage(MessageSender* s) : Message(s) {}
	void send(const std::string& text) override;
private:
	std::string encrypt(const std::string& text);
};