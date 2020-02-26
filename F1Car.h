#ifndef F1TEAM_H
#define F1TEAM_H

#include <string>
#include <iostream>

using namespace std;

class F1Car {
protected:
	string nameTeam;
	int speedCar;  `
	int tyreCondition;
	int damage;

public:
	F1Car(); //construct the tyre and damage
	F1Car(string aNameTeam, int aSpeedCar)

	void set_tyreCondition(int instruction); //change the condition of the tyre every lap
	void set_damage(int hitDamage); //if there is any damage to the car run this

	string get_name(); //get the name of the team
	int get_speed(); //get the speed
	int get_tyreCondition() //get the tyre condition
	int get_damage(); //get the damage of the car

	~F1car(); //destructor
};

#endif