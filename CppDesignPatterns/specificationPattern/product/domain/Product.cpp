#include "Product.h"

Product::Product(const std::string& name, const std::string& category, int price, int stock)
	:name(name), category(category), price(price), stock(stock) {
};

std::string Product::getName() const {
	return name;
}

std::string Product::getCategory() const {
	return category;
}

double Product::getPrice() const {
	return price;
}

int Product::getStock() const {
	return stock;
}