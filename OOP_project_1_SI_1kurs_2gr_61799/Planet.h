#ifndef PLANET_H
#define PLANET_H
#include "Entity.h"

class Planet {

	private:
		std::string name;
		vector<Entity*> entities;
	public:
		Planet(string);
		string getName();
		void setName(string name);
		int getEntities();
		void setEntities(vector<Entity*>);
		void addEntities(EntityType, int);
		void DeletePopulation();
		void moveEntities();
		void detectCollisions();
};

#endif

