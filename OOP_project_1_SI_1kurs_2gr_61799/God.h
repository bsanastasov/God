#ifndef GOD_H
#define GOD_H
#include <sstream>
#include "Human.h"
#include "Scene.h"

class God : public Human {

	public:
		God() : Human () {

		}

		God(string name, double energy, double size, double weight,
		    double strength, State state, Point2D position) :
			Human(name, energy, size, weight,
			      strength, state, position) {

		}
		
		void AddPlanets(Scene*);
		void DeletePopulation(Scene*, string);
		void ErasePlanet(Scene*, string);
		void AddEntities(Scene*, EntityType, string,int);
		void FetchStatistics(Scene*);
};

#endif
