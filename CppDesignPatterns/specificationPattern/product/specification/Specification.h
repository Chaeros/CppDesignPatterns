#pragma once
#include "../domain/Product.h"

class Specification {
public:
	virtual bool isSatisfiedBy(const Product& item) const = 0;
};