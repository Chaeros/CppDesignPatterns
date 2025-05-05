#include "CategorySpecification.h"

CategorySpecification::CategorySpecification(const std::string& category)
	:category(category) {
};

bool CategorySpecification::isSatisfiedBy(const Product& item) const {
	return item.getCategory() == category;
}