#include "DocumentTemplateManager.h"
#include <stdexcept>

// static으로 정의된 헤더파일의 멤버 변수는 cpp 파일에 작성해줘야 실제 변수를 위한 저장 공간이 생성됨
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