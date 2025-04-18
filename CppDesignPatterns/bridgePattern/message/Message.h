#pragma once
#include "../messageSender/MessageSender.h"
#include <string>

class Message {
protected:
	MessageSender* sender;

public:
	explicit Message(MessageSender* m) : sender(m) {}
	virtual ~Message() = default;
	virtual void send(const std::string& text) = 0;
};