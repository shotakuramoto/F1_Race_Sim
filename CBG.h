#ifndef CBG_H
#define CBG_H

//this class will initiate the choice gathering from the user

using namespace std;

class CBG {
private:
	F1teams *Team;
public:
	CBG::CBG(); //constructor
	void start(); //start the game
	void GetChoice(int options); //get the choice from the user
	~CBG();	//destructor
};

#endif