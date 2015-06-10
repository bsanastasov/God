#include "Scene.h"

int Scene::getPlanets() {
	return planets.size();
}

void Scene::setPlanets(vector<Planet*> planets) {
	this->planets = planets;
}

void Scene::GeneratePlanets(){
	RandomGenerator randomGen;
	planets.push_back(new Planet(randomGen.SetRandomName()));
}

void Scene::DeletePopulation(string name){
	for(int i = 0; i < planets.size(); ++i){
		if(!name.compare(planets[i]->getName())){
			planets[i]->DeletePopulation();
		}
	}
}

void Scene::ErasePlanet(string name){
	for(int i = 0; i < planets.size(); ++i){
		if (!name.compare(planets[i]->getName())){
			planets.erase(planets.begin()+i);
		}
	}
}
void Scene::AddEntities(EntityType creature, string name, int n) {
	for(int i = 0; i < planets.size(); ++i){
		if(!name.compare(planets[i]->getName())){
			planets[i]->addEntities(creature, n);
		}
	}
}

void Scene::FetchStatistics(){
	for(int i = 0; i < planets.size(); ++i){
		cout << planets[i]->getName() << '\t';
		cout << planets[i]->getEntities() << '\n';
	}
}

void Scene::Update(){
	for(int i = 0; i < planets.size(); ++i){
		planets[i]->moveEntities();
		planets[i]->detectCollisions();
	}
}

Scene::~Scene(){
	for (int i = 0; i < planets.size(); ++i){
		delete planets.back();
		planets.pop_back();
	}
}
