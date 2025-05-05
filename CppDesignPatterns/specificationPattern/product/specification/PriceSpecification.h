#pragma once
#include "Specification.h"
#include <thread>

class PriceSpecification : public Specification {
private:
	int maxPrice;
public:
	PriceSpecification(int maxPrice);
	bool isSatisfiedBy(const Product& item) const override;
};