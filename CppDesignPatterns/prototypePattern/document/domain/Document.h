#pragma once
#include "../prototype/Prototype.h"
#include <string>

class Document : public Prototype {
public:
	virtual void setContent(const std::string& content) = 0;
	virtual std::string getContent() const = 0;
	virtual Document* clone() const override = 0;
	virtual ~Document() = default;
};

