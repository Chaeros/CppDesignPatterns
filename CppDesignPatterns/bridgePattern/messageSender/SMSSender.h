#pragma once
#include "MessageSender.h"

class SMSSender : public MessageSender {
public:
	void sendMessage(const std::string& msg) override;
};