#pragma once
#include <unordered_map>
#include <memory>
#include "../domain/Document.h"

class DocumentTemplateManager {
private:
	static std::unordered_map<std::string, std::unique_ptr<Document>> templates;
public:
	static void addTemplate(const std::string& name, const Document& doc);
	static std::unique_ptr<Document> createDocument(const std::string& templateName);
	static void clearTemplates();
};