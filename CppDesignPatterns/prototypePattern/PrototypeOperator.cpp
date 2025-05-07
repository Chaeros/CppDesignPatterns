#include "PrototypeOperator.h"
#include "document/templateManager/DocumentTemplateManager.h"
#include "document/domain/Document.h"
#include "document/domain/MemoDocument.h"
#include "document/prototype/Prototype.h"
#include <iostream>

void prototypePatternRun() {
	std::string name = "chaeros";
	DocumentTemplateManager::addTemplate("hi", MemoDocument("Hi chaero!"));
	DocumentTemplateManager::addTemplate("bye", MemoDocument("Bye chaero!"));

	auto hiDoc = DocumentTemplateManager::createDocument("hi");
	hiDoc->setContent(hiDoc->getContent()+" !!!");
	std::cout << hiDoc->getContent() << std::endl;

	auto byeDoc = DocumentTemplateManager::createDocument("bye");
	byeDoc->setContent(byeDoc->getContent() + " ???");
	std::cout << byeDoc->getContent() << std::endl;

	DocumentTemplateManager::clearTemplates();
}