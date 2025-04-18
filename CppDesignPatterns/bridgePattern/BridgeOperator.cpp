#include "message/TextMessage.h"
#include "message/EncryptedMessage.h"
#include "messageSender/EmailSender.h"
#include "messageSender/SMSSender.h"

void bridgePatternRun() {
	EmailSender emailSender;
	SMSSender smsSender;

	TextMessage tm(&emailSender);
	EncryptedMessage em(&smsSender);

	tm.send("Hello~~!");
	em.send("Hello~~!");
}