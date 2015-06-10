#include "Entity.h"

Entity::Entity() : name("Georgi"), energy(100), size(100), weight(100), strength(100), state(Attacking), position(1, 2) {

}

Entity::Entity(string name, double energy, double size, double weight, double strength, State state, Point2D position) {
	SetName(name);
	SetEnergy(energy);
	SetSize(size);
	SetWeight(weight);
	SetStrength(strength);
	SetState(state);
	SetPosition(position);
}

string Entity::GetName() {
	return name;
}

double Entity::GetEnergy() {
	return energy;
}

double Entity::GetSize() {
	return size;
}

double Entity::GetWeight() {
	return weight;
}

double Entity::GetStrength() {
	return strength;
}

State Entity::GetState() {
	return state;
}

Point2D Entity::GetPosition() {
	return position;
}

void Entity::SetName(string name) {
	this->name = name;
}

void Entity::SetEnergy(double energy) {
	this->energy = energy;
}

void Entity::SetSize(double size) {
	this->size = size;
}

void Entity::SetWeight(double weight) {
	this->weight = weight;
}

void Entity::SetStrength(double strength) {
	this->strength = randomPosition.SetRandomDamage();
}

void Entity::SetState(State state) {
	this->state = state;
}

void Entity::SetPosition(Point2D position) {
	this->position = position;
}

void Entity::Attack(Entity& enemy) {
	this->SetState(Attacking);
	double newEnergy = 0;
	newEnergy = enemy.energy - this->strength;
	enemy.SetEnergy(newEnergy);
}

void Entity::Move() {
	this->SetState(Moving);
	position.SetX(position.GetX() + randomPosition.SetRandomX());
	position.SetY(position.GetY() + randomPosition.SetRandomY());
}

void Entity::checkForAttack(Entity& enemy) {
	if (this->position.distance(enemy.position) == 1 || this->position.distance(enemy.position) == sqrt(2)) {
		cout <<"Before: " << enemy.GetEnergy() << endl;
		Attack(enemy);
		cout << "\nAfter: " << enemy.GetEnergy() << endl;
	}
}

void Entity::DoAction() {
	srand(static_cast<unsigned int>(time(0)));
	int random = rand() % 2 + 1;
	if (random == 1) {
		this->Move();
		cout << "\tMoving" << endl;
	} else {
		//this->checkForAttack();
	}

}
