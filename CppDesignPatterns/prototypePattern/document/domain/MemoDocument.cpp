#include "MemoDocument.h"

MemoDocument::MemoDocument(const std::string& content)
	:content(content) {
};

Document* MemoDocument::clone() const {
	return new MemoDocument(this->content);
}

void MemoDocument::setContent(const std::string& content) {
	this->content = content;
}

std::string MemoDocument::getContent() const {
	return this->content;
}