#include "NewsAgency.h"

void NewsAgency::registerObserver(Observer* observer) {
	observers.push_back(observer);
}

void NewsAgency::removeObserver(Observer* observer) {
	auto end = std::remove(observers.begin(), observers.end(), observer);
	observers.erase(end, observers.end());
}

void NewsAgency::notifyObservers() {
	for (auto* observer : observers) {
		observer->update(news);
	}
}

void NewsAgency::setNews(std::string news) {
	this->news = news;
	notifyObservers();
}