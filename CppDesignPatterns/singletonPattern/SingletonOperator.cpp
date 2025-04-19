#include "component/Component.h"
#include "component/Button.h"
#include "component/Label.h"
#include "theme/Theme.h"

void singletonPatternRun() {
	Component* button = new Button("button");
	Component* label = new Label("label");

	button->display();
	label->display();

	Theme::getInstance().setThemeColor("dark");

	button->display();
	label->display();
}