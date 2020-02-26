#include <iostream>
#include <string>
#include "CBG.h"
#include "F1Car.h"

using namespace std;

CBG::CBG() {
	//create the F1 Car objects
	Teams = new F1team*[3];
	Teams[0] = new F1Car("Mercedes",1);
	Teams[1] = new F1Car("Redbull",2);
	Teams[2] = new F1Car("Ferrari",3);
}



void CBG::Start(){ // main game
	string State = "";
	cout << "Welcome" << endl;

	/////output options/////////
	cout << "which team would you like to use?" << endl;
	cout << "1: Mercedes" << endl;
	cout << "2: Redbull" << endl;
	cout << "3: Ferrari" << endl;

	GetChoice(3);//get users input

	}
	cout << "Finished" << endl;
}