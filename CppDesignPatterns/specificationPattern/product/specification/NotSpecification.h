#pragma once
#include <thread>
#include "Specification.h"

class NotSpecification : public Specification {
private:
	std::shared_ptr<Specification> spec;
public:
	NotSpecification(const std::shared_ptr<Specification> spec);
	bool isSatisfiedBy(const Product& item) const override;
};