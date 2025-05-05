#include "SpecificationOperator.h"
#include "product/domain/Product.h"
#include "product/filter/ProductFilter.h"
#include "product/specification/AndSpecification.h"
#include "product/specification/OrSpecification.h"
#include "product/specification/NotSpecification.h"
#include "product/specification/InStockSpecification.h"
#include "product/specification/PriceSpecification.h"
#include "product/specification/CategorySpecification.h"
#include <iostream>
#include <vector>

void specificationPatternRun() {
	std::vector<std::shared_ptr<Product>> products;
	products.push_back(std::make_shared<Product>("Laptop", "Electronics", 1200, 5));
	products.push_back(std::make_shared<Product>("Smartphone", "Electronics", 800, 0));
	products.push_back(std::make_shared<Product>("Headphones", "Electronics", 200, 10));
	products.push_back(std::make_shared<Product>("Book", "Literature", 20, 50));

	auto electronicsSpec = std::make_shared<CategorySpecification>("Electronics");
	auto inStockSpec = std::make_shared<InStockSpecification>();
	auto expensiveSpec = std::make_shared<PriceSpecification>(500);

	auto electronicInStock = std::make_shared<AndSpecification>(electronicsSpec, inStockSpec);
	auto electronicOrInStock = std::make_shared<OrSpecification>(electronicsSpec, inStockSpec);
	auto notExpensive = std::make_shared<NotSpecification>(expensiveSpec);

	std::cout << "Electronics in stock:" << std::endl;
	ProductFilter::printProducts(ProductFilter::filter(products, electronicInStock));
	std::cout << std::endl;

	std::cout << "Electronics or items in stock:" << std::endl;
	ProductFilter::printProducts(ProductFilter::filter(products, electronicOrInStock));
	std::cout << std::endl;

	std::cout << "Not expensive items:" << std::endl;
	ProductFilter::printProducts(ProductFilter::filter(products, notExpensive));
	std::cout << std::endl;
}