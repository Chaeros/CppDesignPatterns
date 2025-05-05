#include "InStockSpecification.h"

bool InStockSpecification::isSatisfiedBy(const Product& item) const {
	return item.getStock() > 0;
}