#include "OrSpecification.h"

OrSpecification::OrSpecification(const std::shared_ptr<Specification> sepc1, const std::shared_ptr<Specification> spec2)
	:spec1(sepc1), spec2(spec2) {
};

bool OrSpecification::isSatisfiedBy(const Product& item) const {
	return spec1->isSatisfiedBy(item) || spec2->isSatisfiedBy(item);
}