#include "InsertTextCommand.h"

InsertTextCommand::InsertTextCommand(const std::shared_ptr<TextEditor>& editor, const std::string& text, int position)
	:editor(editor), text(text), position(position) {
};

void InsertTextCommand::execute() {
	editor->insertText(text, position);
}

void InsertTextCommand::undo() {
	editor->deleteText(position, text.length());
}
