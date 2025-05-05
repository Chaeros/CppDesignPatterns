#pragma once
#include <string>

class Product {
private:
	std::string name;
	std::string category;
	int price;
	int stock;
public:
	Product(const std::string& name, const std::string& category, int price, int stock);
	std::string getName() const;
	std::string getCategory() const;
	double getPrice() const;
	int getStock() const;
};