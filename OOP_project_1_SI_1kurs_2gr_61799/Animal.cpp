#include "Animal.h"

void Animal::Eat() {
	this->SetState(Eating);
	this->SetWeight(this->GetWeight() + 10);
	this->SetEnergy(this->GetEnergy()+ 10);
}

void Animal::Sleep() {
	this->SetState(Sleeping);
	this->SetEnergy(this->GetEnergy() + 5);
}

void Animal::SearchForFood() {
	this->SetState(SearchingForFood);
	this->SetWeight(this->GetWeight() - 5);
	this->SetEnergy(this->GetEnergy() - 10);
}

void Animal::DoAction() {
	srand(static_cast<unsigned int>(time(0)));
	int random = rand() % 5 + 1;
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
	}
}
