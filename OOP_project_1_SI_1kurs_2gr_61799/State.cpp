/*#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){

enum State {
	Moving = 0,
	Attacking = 1,
	Eating = 2,
	SearchingForFood = 3,
	Sleeping = 4,
	Analyzing = 5,
	Unknown = 6
};


int i = -1;

cin >> i;

switch(i)
  {
  case Moving:
    cout << "Moving\n";
    break;
  case Attacking:
    cout << "Attacking\n";
    break;
  case Eating:
    cout << "Eating\n";
    break;
  default:
    cout << "Invalid Selection\n";
    break;
  }
return 0;
}
*/
#include <iostream>
#include <string>
#include <map>
using namespace std;

enum State {
	Moving = 0,
	Attacking = 1,
	Eating = 2,
	SearchingForFood = 3,
	Sleeping = 4,
	Analyzing = 5,
	Unknown = 6
};
map<string, State> states;

void register_states(){
	
    states["Moving"] = Moving;
    states["Attacking"] = Attacking;
    states["Eating"]   = Eating;
    states["SearchingForFood"]   = SearchingForFood;
    states["Sleeping"]   = Sleeping;
    states["Analyzing"]   = Analyzing;
    states["Unknown"]   = Unknown;
}

/*int main(){

    register_states();
    string input;
    cin >> input;
    switch( states[input] ){
    
    case Moving:
        cout << "Moving!"; 
		break;
    case Attacking:
        cout << "Attacking!"; 
		break;
    case Eating:
        cout << "Eating!"; 
		break;
    }
    
    
    
    return 0;
}*/

