#pragma once
#include "Specification.h"

class CategorySpecification : public Specification {
private:
	std::string category;
public:
	CategorySpecification(const std::string& category);
	bool isSatisfiedBy(const Product& item) const override;
};