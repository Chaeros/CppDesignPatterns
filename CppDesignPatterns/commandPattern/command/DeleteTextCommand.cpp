#include "DeleteTextCommand.h"

DeleteTextCommand::DeleteTextCommand(const std::shared_ptr<TextEditor>& edit, int position, int length)
	:editor(edit), position(position), deletedText(edit->getTextSubstring(position,position+length)) {
};

void DeleteTextCommand::execute() {
	editor->deleteText(position, deletedText.length());
}

void DeleteTextCommand::undo() {
	editor->insertText(deletedText, position);
}