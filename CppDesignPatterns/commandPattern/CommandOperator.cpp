#include <iostream>
#include <memory>
#include "CommandOperator.h"
#include "editor/TextEditor.h"
#include "invoker/TextEditorInvoker.h"
#include "command/InsertTextCommand.h"
#include "command/DeleteTextCommand.h"

void commandPatternRun() {
    auto editor = std::make_shared<TextEditor>();
    TextEditorInvoker invoker;

    auto insertHello = std::make_shared<InsertTextCommand>(editor, "Hello, ", 0);
    invoker.executeCommand(insertHello);

    auto insertWorld = std::make_shared<InsertTextCommand>(editor, "World!", 7);
    invoker.executeCommand(insertWorld);

    std::cout << "Current text: " << editor->getContent() << std::endl;

    invoker.undo();
    std::cout << "After undo: " << editor->getContent() << std::endl;

    invoker.redo();
    std::cout << "After redo: " << editor->getContent() << std::endl;

    auto deleteCmd = std::make_shared<DeleteTextCommand>(editor, 0, 7);
    invoker.executeCommand(deleteCmd);
    std::cout << "After delete: " << editor->getContent() << std::endl;

    invoker.undo();
    std::cout << "Final text: " << editor->getContent() << std::endl;
}