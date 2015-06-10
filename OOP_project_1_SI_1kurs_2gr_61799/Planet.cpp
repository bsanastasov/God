#include "Planet.h"
#include "God.h"

Planet::Planet(string name) : name(name) {
}

string Planet::getName() {
	return this->name;
}

void Planet::setName(string name) {
	this->name = name;
}

int Planet::getEntities() {
	return entities.size();
}

void Planet::setEntities(vector<Entity*> entities) {
	this->entities = entities;
}

void Planet::addEntities(EntityType ent,int n) {
	for(int i = 0; i < n; i++){
		switch(ent){
			case entity:
				entities.push_back(new Entity());
				break;
			case animal:
				entities.push_back(new Animal());
				break;
			case human:
				entities.push_back(new Human());
				break;
			case god:
				entities.push_back(new God());
				break;
		}
	}
}

void Planet::DeletePopulation(){
	entities.clear();
}

void Planet::moveEntities(){
	for(int i = 0; i < entities.size(); ++i){
		entities[i]->Move();
	}
}

void Planet::detectCollisions(){
	for (int i = 0; i < entities.size(); ++i){
		for(int j = i + 1; j < entities.size(); ++j){
			if(entities[i]->GetPosition().distance(entities[j]->GetPosition()) < 1){
				switch(rand()%2+1){
					case 1:
						entities[i]->Attack(*entities[j]);
						break;
					case 2:
						addEntities(entity, 1);
						break;
				}
			}
		}
	}
}
