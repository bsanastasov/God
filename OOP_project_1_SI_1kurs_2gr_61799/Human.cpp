#include "Human.h"

void Human::Analyze() {
	this->SetState(Analyzing);
	this->SetEnergy(this->GetEnergy() - 5);
}

void Human::DoAction() {
	srand(static_cast<unsigned int>(time(0)));
	int random = rand() % 6 + 1;
	switch(random) {
		case 1:
			this->Move();
			break;

		case 2:
			//this->checkForAttack();
			break;

		case 3:
			this->Eat();
			break;

		case 4:
			this->Sleep();
			break;

		case 5:
			this->SearchForFood();
			break;

		case 6:
			this->Analyze();
			break;
	}
}
