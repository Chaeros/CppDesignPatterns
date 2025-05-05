#include "ProductFilter.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <thread>

std::vector<std::shared_ptr<Product>> ProductFilter::filter(const std::vector<std::shared_ptr<Product>>& items, const std::shared_ptr<Specification> spec){
	std::vector<std::shared_ptr<Product>> result;
	result.reserve(items.size());

	// result에 조건 만족되면 삽입
	std::copy_if(
		items.begin(), items.end(),
		std::back_inserter(result),
		[&](const auto& product) {
			return spec->isSatisfiedBy(*product);
		}
	);
	return result;
}

void ProductFilter::printProducts(const std::vector<std::shared_ptr<Product>>& products) {
	std::for_each(
		products.begin(), products.end(),
		[](const std::shared_ptr<Product>& product) {
			std::cout
				<< product->getName() << " - "
				<< product->getCategory() << " - $"
				<< product->getPrice() << " - Stock: "
				<< product->getStock() << std::endl;
		}
	);
}