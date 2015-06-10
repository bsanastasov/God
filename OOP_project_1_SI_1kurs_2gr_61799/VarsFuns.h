#ifndef VARSFUNS_H
#define VARSFUNS_H
enum Commands {
    CreatePlanet = 0,
    DeletePopulation = 1,
    AddEntities = 2
};

map<string, Commands> commands;
map<string, EntityType> entityTypes;

void register_commands() {

	commands["CreatePlanet"] = CreatePlanet;
	commands["DeletePopulation"] = DeletePopulation;
	commands["AddEntities"] = AddEntities;

}

void register_entityTypes() {
	entityTypes["entity"] = entity;
	entityTypes["animal"] = animal;
	entityTypes["human"] = human;
	entityTypes["god"] = god;
	entityTypes["unknown"] = unknown;

}

#endif
