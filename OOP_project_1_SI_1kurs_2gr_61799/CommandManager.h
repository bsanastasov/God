#ifndef COMMANDMANAGER_H
#define COMMANDMANAGER_H
#include <iostream>
#include <string>
#include "EntityType.h"
using namespace std;

class CommandManager{
	private:
		string planet;
		int num;
		EntityType entity;
	public:
		string getPlanet();
		int getNum();
		EntityType getEntity();
		void processCommand();
};
#endif
