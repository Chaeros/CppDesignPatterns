#pragma once
#include "Document.h"

class MemoDocument : public Document {
private:
	std::string content;
public:
	MemoDocument(const std::string& content);
	Document* clone() const override;
	void setContent(const std::string& content) override;
	std::string getContent() const override;
};