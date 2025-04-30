#pragma once
#include <memory>
#include "Command.h"
#include "../editor/TextEditor.h"

class InsertTextCommand : public Command {
private:
	std::shared_ptr<TextEditor> editor;
	std::string text;
	int position;
public:
	InsertTextCommand(const std::shared_ptr<TextEditor>& editor, const std::string& text, int position);
	void execute() override;
	void undo() override;
};