#include "NotSpecification.h"

NotSpecification::NotSpecification(const std::shared_ptr<Specification> spec)
	:spec(spec) {
};

bool NotSpecification::isSatisfiedBy(const Product& item) const {
	return !spec->isSatisfiedBy(item);
}