#pragma once
#include <string>
#include <stdexcept>
#include <algorithm>

class TextEditor {
private:
	std::string content;
public:
	TextEditor() = default;
	void insertText(const std::string& text, std::size_t position);
	void deleteText(std::size_t position, std::size_t length);
	std::string getTextSubstring(std::size_t start, std::size_t end) const;
	std::string getContent() const;
};