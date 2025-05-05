#include "PriceSpecification.h"

PriceSpecification::PriceSpecification(int maxPrice)
	:maxPrice(maxPrice) {
};

bool PriceSpecification::isSatisfiedBy(const Product& item) const {
	return item.getPrice() >= maxPrice;
}