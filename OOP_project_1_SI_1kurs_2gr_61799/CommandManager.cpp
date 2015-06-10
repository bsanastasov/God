#include "CommandManager.h"
#include <cstdlib>

string CommandManager::getPlanet(){
	return planet;
}

int CommandManager::getNum(){
	return num;
}

EntityType CommandManager::getEntity(){
	return entity;
}

void CommandManager::processCommand(){
	string input="";
	cin.ignore();
	getline(cin, input);
	int pos=0;
	string splitStr[4];
	int i = 0;
	while((pos=input.find(" ")) != std::string::npos){
		splitStr[i]=input.substr(0, pos);

		input.erase(0, pos + 1);
		i++;
	}
	planet = splitStr[1];
	if(splitStr[2] == "entity"){
		entity = entity;
	}else if(splitStr[2] == "animal"){
		entity = animal;
	}else if(splitStr[2] == "human"){
		entity = human;
	} else{
		entity = god;
	}
	num = atoi(input.c_str());
}
