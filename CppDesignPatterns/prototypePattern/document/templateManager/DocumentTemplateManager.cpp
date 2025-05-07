#include "DocumentTemplateManager.h"
#include <stdexcept>

// static���� ���ǵ� ��������� ��� ������ cpp ���Ͽ� �ۼ������ ���� ������ ���� ���� ������ ������
std::unordered_map<std::string, std::unique_ptr<Document>> DocumentTemplateManager::templates;

void DocumentTemplateManager::addTemplate(const std::string& name, const Document& doc) {
    auto clonePtr = std::unique_ptr<Document>(doc.clone());
    auto result = templates.emplace(name, std::move(clonePtr));
    if (!result.second) {
        throw std::runtime_error("Template already exists: " + name);
    }
}

std::unique_ptr<Document> DocumentTemplateManager::createDocument(const std::string& templateName) {
	auto it = templates.find(templateName);
	if (it == templates.end()) {
		throw std::out_of_range("Template not found: " + templateName);
	}
	return std::unique_ptr<Document>(it->second->clone());
}

void DocumentTemplateManager::clearTemplates() {
    templates.clear();
}