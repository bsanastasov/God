#include "Simulator.h"
#include <typeinfo>
Simulator::Simulator() {
	m_player = new God;
	space = new Scene;
	command = new CommandManager;
}

void Simulator::Run() {
	Menu();
}

void Simulator::Update() {
	space->Update();
}

void Simulator::Menu() {
	int choice=-1;
	string input="";
	do {
		cout << setw(10) << "\n\n\t\t\tMENU" << '\n';
		cout << "1. To add a new planet\n";
		cout << "2. To delete the entities of a planet\n";
		cout << "3. To delete a planet\n";
		cout << "4. To see statistics for the planets\n";
		cout << "5. To add entities to a planet in the form:\n";
		cout << "add <name of planet> <entity|animal|human|god> <number>\n";
		cout << "Input (0 for exit):\n";
		cin >>choice;
		switch(choice) {
			case 1:
				m_player->AddPlanets(space);
				break;
			case 2:
				if(space->getPlanets()) {
					cout << "Enter the name of the planet for which you want to delete the population:\n";
					cin.ignore();
					getline(cin, input);
					m_player->DeletePopulation(space, input);
				} else {
					cout << "You don't have any planets'!\n";
				}
				break;
			case 3:
				if(space->getPlanets()) {
					cout << "Enter the name of the planet to destroy:\n";
					cin.ignore();
					getline(cin, input);
					m_player->ErasePlanet(space, input);
				} else {
					cout << "You don't have any planets'!\n";
				}
				break;
			case 4:
				m_player->FetchStatistics(space);
				break;
			case 5:
				command->processCommand();
				m_player->AddEntities(space, command->getEntity(), command->getPlanet(), command->getNum());
				break;
		}
	} while(command!=0);
}

Simulator::~Simulator() {

}
