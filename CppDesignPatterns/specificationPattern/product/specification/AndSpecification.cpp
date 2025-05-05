#include "AndSpecification.h"

AndSpecification::AndSpecification(const std::shared_ptr<Specification> spec1, const std::shared_ptr<Specification> spec2)
	:spec1(spec1), spec2(spec2) {
};

bool AndSpecification::isSatisfiedBy(const Product& item) const {
	return spec1->isSatisfiedBy(item) && spec2->isSatisfiedBy(item);
}