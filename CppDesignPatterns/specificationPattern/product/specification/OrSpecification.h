#pragma once
#include <thread>
#include "Specification.h"

class OrSpecification : public Specification {
private:
	std::shared_ptr<Specification> spec1;
	std::shared_ptr<Specification> spec2;
public:
	OrSpecification(const std::shared_ptr<Specification> spec1, const std::shared_ptr<Specification> spec2);
	bool isSatisfiedBy(const Product& item) const override;
};