#ifndef SIMULATOR_H
#define SIMULATOR_H
#include <iomanip>
#include "CommandManager.h"
#include "God.h"
#include "Scene.h"

class Simulator{
	private:
		God* m_player;
		Scene* space;
		CommandManager* command;
	public:
		Simulator();
		void Run();
		void Update();
		void Menu();
		~Simulator();
};

#endif
