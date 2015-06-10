#include "God.h"

void God::AddPlanets(Scene* space) {
	space->GeneratePlanets();
}


void God::DeletePopulation(Scene* space, string name) {
	space->DeletePopulation(name);
}

void God::ErasePlanet(Scene* space, string name){
	space->ErasePlanet(name);
}

void God::AddEntities(Scene* space, EntityType entity, string name, int num){
	space->AddEntities(entity, name, num);
}

void God::FetchStatistics(Scene* space){
	space->FetchStatistics();
}
