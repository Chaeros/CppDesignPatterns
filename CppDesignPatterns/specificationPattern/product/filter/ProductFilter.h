#pragma once
#include <vector>
#include <thread>
#include "../domain/Product.h"
#include "../specification/Specification.h"

class ProductFilter {
public:
	static std::vector<std::shared_ptr<Product>> filter(const std::vector<std::shared_ptr<Product>>& items, const std::shared_ptr<Specification> spec);
	static void printProducts(const std::vector<std::shared_ptr<Product>>& products);
};