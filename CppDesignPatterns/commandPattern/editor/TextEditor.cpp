	#include "TextEditor.h"
	#include <algorithm>

	void TextEditor::insertText(const std::string& text, std::size_t position) {
		if (position > content.size()) {
			throw std::out_of_range("잘못된 삽입 위치를 입력하셨습니다.");
		}
		content.insert(position, text);
	}

	void TextEditor::deleteText(std::size_t position, std::size_t length) {
		if (position > content.size()) {
			throw std::out_of_range("잘못된 삭제 위치를 입력하셨습니다.");
		}
		std::size_t eraseLen = std::min(length, content.size() - position);
		content.erase(position, eraseLen);
	}

	std::string TextEditor::getTextSubstring(std::size_t start, std::size_t end) const {
		if (start > end || end > content.size()) {
			throw std::out_of_range("잘못된 문자열 범위를 입력하셨습니다.");
		}
		return content.substr(start, end - start);
	}

	std::string TextEditor::getContent() const {
		return content;
	}