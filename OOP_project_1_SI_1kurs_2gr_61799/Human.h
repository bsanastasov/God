#ifndef HUMAN_H
#define HUMAN_H
#include "Animal.h"

class Human : public Animal {
	public:
		Human() : Animal() {

		}

		Human(string name, double energy, double size, double weight,
		      double strength, State state, Point2D position) :
			Animal(name, energy, size, weight,
			       strength, state, position) {

		}

		void Analyze();
		void DoAction();
};

#endif
