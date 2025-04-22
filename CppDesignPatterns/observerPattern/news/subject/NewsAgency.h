#pragma once
#include "Subject.h"
#include "../observer/Observer.h"
#include <vector>

class NewsAgency : public Subject {
private:
	std::vector<Observer*> observers;
	std::string news;
public:
	void registerObserver(Observer* observer) override;
	void removeObserver(Observer* observer) override;
	void notifyObservers() override;
	void setNews(std::string news);
};