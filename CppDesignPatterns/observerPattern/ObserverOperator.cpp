#include "ObserverOperator.h"
#include "news/subject/NewsAgency.h"
#include "news/observer/NewsChannel.h"
#include <memory>

void observerPatternRun() {
	auto agency = std::make_unique<NewsAgency>();

	NewsChannel channel1{ "Channel 1" };
	NewsChannel channel2{ "Channel 2" };

	agency->registerObserver(&channel1);
	agency->registerObserver(&channel2);

	agency->setNews("Breaking news! All channel run!");
	agency->removeObserver(&channel2);
	agency->setNews("Remove channel! Only channel1 run!");
}