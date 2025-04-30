#pragma once
#include <memory>
#include "Command.h"
#include "../editor/TextEditor.h"

class DeleteTextCommand : public Command {
private:
	std::shared_ptr<TextEditor> editor;
	std::string deletedText;
	int position;
public:
	DeleteTextCommand(const std::shared_ptr<TextEditor>& editor, int position, int length);
	void execute() override;
	void undo() override;
};