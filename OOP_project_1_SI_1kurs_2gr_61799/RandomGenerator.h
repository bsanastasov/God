#ifndef RANDOMGENERATOR_H
#define RANDOMGENERATOR_H
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
using namespace std;

class RandomGenerator  {

	private:
		double x;
		double y;
		double damage;
		vector <string> randomNames;
		// Private section
	public:
		RandomGenerator();
		string SetRandomName();
		double SetRandomX();
		double SetRandomY();
		double SetRandomDamage();
		// Public Declarations
	protected:
		// Protected Declarations
};

#endif

