#ifndef ENTITY_H
#define ENTITY_H
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <map>
#include <math.h>
#include <string>
#include <vector>
#include "EntityType.h"
#include "Point2D.h"
#include "Randomgenerator.h"
#include "State.h"
using namespace std;

class Entity {

	protected:
		string name;
		double energy;
		double size;
		double weight;
		double strength;
		State state;
		Point2D position;
		RandomGenerator randomPosition;
		virtual void checkForAttack(Entity&);

	public:
		Entity();
		Entity(string name, double energy, double size, double weight, double strength, State state, Point2D position);
		string GetName();
		double GetEnergy();
		double GetSize();
		double GetWeight();
		double GetStrength();
		State GetState();
		Point2D GetPosition();
		void SetName(string name);
		void SetEnergy(double energy);
		void SetSize(double size);
		void SetWeight(double weigth);
		void SetStrength(double strength);
		void SetState(State state);
		void SetPosition(Point2D position);

		virtual void Attack(Entity& enemy);
		virtual void Move();
		virtual void Eat(){}
		virtual void Sleep(){}
		virtual void SearchForFood(){}
		virtual void Analyze(){}
		virtual void DoAction();
};

#endif
