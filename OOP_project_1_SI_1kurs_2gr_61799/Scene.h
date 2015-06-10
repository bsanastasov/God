#ifndef SCENE_H
#define SCENE_H
#include "Planet.h"
#include "EntityType.h"

class Scene {

	private:
		vector <Planet*> planets;
	public:
		Scene(){}
		int getPlanets();
		void setPlanets(vector<Planet*>);
		void GeneratePlanets();
		void DeletePopulation(string);
		void ErasePlanet(string);
		void AddEntities(EntityType, string, int);
		void FetchStatistics();
		void Update();
		~Scene();
};

#endif

