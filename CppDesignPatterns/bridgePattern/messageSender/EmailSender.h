#pragma once
#include "MessageSender.h"

class EmailSender : public MessageSender {
public:
	void sendMessage(const std::string& msg) override;
};