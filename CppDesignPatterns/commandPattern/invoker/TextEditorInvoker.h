#pragma once
#include <stack>
#include <memory>
#include "../command/Command.h"

class TextEditorInvoker {
private:
	std::stack<std::shared_ptr<Command>> undoStack;
	std::stack<std::shared_ptr<Command>> redoStack;
public:
	void executeCommand(const std::shared_ptr<Command>& command);
	void undo();
	void redo();
};