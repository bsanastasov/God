#ifndef ANIMAL_H
#define ANIMAL_H
#include "Entity.h"
class Animal : public Entity {

	public:
		Animal() : Entity() {

		}

		Animal(string name, double energy, double size, double weight,
		       double strength, State state, Point2D position) :
			Entity(name, energy, size, weight,
			       strength, state, position) {

		}

		void Eat();
		void Sleep();
		void SearchForFood();
		void DoAction();
};
#endif
