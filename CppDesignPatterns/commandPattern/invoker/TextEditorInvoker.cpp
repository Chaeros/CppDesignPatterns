#include "TextEditorInvoker.h"

void TextEditorInvoker::executeCommand(const std::shared_ptr<Command>& command) {
	command->execute();
	undoStack.push(command);

	while (!redoStack.empty()) {
		redoStack.pop();
	}
}

void TextEditorInvoker::undo() {
    if (undoStack.empty()) return;
    auto cmd = undoStack.top(); 
    undoStack.pop();
    cmd->undo();
    redoStack.push(cmd);
}

void TextEditorInvoker::redo() {
    if (redoStack.empty()) return;
    auto cmd = redoStack.top(); 
    redoStack.pop();
    cmd->execute();
    undoStack.push(cmd);
}