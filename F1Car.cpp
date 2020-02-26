#include <string>
#include <iostream>
#include "F1Car.h"

using namespace std;

F1Car::F1Car() { //construct the tyre and damage
	tyreCondition = 100;
	damage = 0;
}

F1Car::F1(string aNameTeam, int aSpeedCar) {
	nameTeam = aNameTeam;
	speedCar = aSpeedCar;
}

void F1Car::set_tyreCondition (int instruction){ //change the condition of the tyre every lap
	//depending on the instruction change the consumption of the tyre
	switch (instruction) {
		case 1: //if the instruction is faster
			tyreCondition = tyreCondition - 15;
			break;
		case 2: //if the instruction is normal
			tyreCondition = tyreCondition - 8;
			break;
		case 3: //if the instruction is slower
			tyreCondition = tyreCondition - 5;
	}
}

void F1Car::set_damage(int hitDamage){ //if there is any damage to the car run this
	//if the car got involve into the accidient, decrease the number and slower the speed
	damage = damage - hitDamage;
}

string F1Car::get_name(){ //get the name of the team
	return nameTeam;
}

int F1Car::get_speed(){ //get the speed
	return speedCar;
}

int F1Car::get_tyreCondition(){ //get the tyre condition
	return tyreCondition;
}

int F1Car::get_damage(){ //get the damage of the car
	return damage;
}

F1Car::~F1car(){ //destructor
}