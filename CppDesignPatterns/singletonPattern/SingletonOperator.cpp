#include "component/Component.h"
#include "component/Button.h"
#include "component/Label.h"

void singletonPatternRun() {
	Component button = new Button("button");
	Component label = new Label("label");

	button.display();
	label.display();
}