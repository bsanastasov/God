#include "RandomGenerator.h"

RandomGenerator::RandomGenerator() {
	randomNames.push_back("Mercury");
	randomNames.push_back("Venus");
	randomNames.push_back("Earth");
	randomNames.push_back("Mars");
	randomNames.push_back("Jupiter");
	randomNames.push_back("Saturn");
	randomNames.push_back("Uranus");
	randomNames.push_back("Neptune");
	randomNames.push_back("Pluto");
}

string RandomGenerator::SetRandomName() {
	srand(time(0));
	return randomNames[rand() % randomNames.size()];
}

double RandomGenerator::SetRandomX() {
	srand(time(0));
	return rand() % 5;
}

double RandomGenerator::SetRandomY() {
	srand(time(0));
	return rand() % 10;
}

double RandomGenerator::SetRandomDamage() {
	srand(time(0));
	return rand() % 100;
}






