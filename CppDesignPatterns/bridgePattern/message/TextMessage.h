#pragma once
#include "Message.h"

class TextMessage : public Message {
public:
	TextMessage(MessageSender* s) : Message(s) {}
	void send(const std::string& text) override;
};