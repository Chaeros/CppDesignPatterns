#pragma once
#include "Specification.h"

class InStockSpecification : public Specification {
public:
	bool isSatisfiedBy(const Product& item) const override;
};