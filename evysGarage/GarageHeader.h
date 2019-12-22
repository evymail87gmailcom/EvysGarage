#pragma once
#include"Vehicle.h"
#include"Bicycle.h"
#include"Bus.h"
#include"Car.h"
#include"MotorCycle.h"
#include"Truck.h"
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

class Garage {
protected:
	int anyVehicle;
	Vehicle* myVehicle;
	
public:
	string nameOfGarage;
	int bicycleCounter = 0;
	int carCounter = 0;
	int truckCounter = 0;
	int motorCycleCounter = 0;
	int busCounter = 0;
	vector <Vehicle*>myGarage;
	int numberOfVehicles=0;
	vector<Vehicle*>::iterator it;
	bool foundVehicle = 0;
	Garage() {
		anyVehicle = 0;
		numberOfVehicles = 0;
		nameOfGarage = "";
	};
	Garage(string nameOfGarageIn) {
		nameOfGarage = nameOfGarageIn;
	};
	
	void removeVehicle(Vehicle* x);
	
	string getNameOfGarage();
	//Här finns funktionen för hur fordonet skall läggas till
	void addVehicleAttributes();

	//Adds a vehicle to the garage. WORKS!
	void addVehicle();

	//Prints every element of the garage, WORKS!!!
	void listVehicles();

	//Searchfunction to find a specific registrationnumber in the garage, Works!!
	int searchRegistrationNumber();

	int searchColor();
	int searchVehicleType();

	//Prints every type of vehicle and how many of them there are in the garage, WORKS! 
	void listTypeOfVehicles();
	
	//Prints the name of the garage
	void printGarage(int numberofSpots);

	//Submenu for removevehicle main-choice
	void removeVehicle();
	

};