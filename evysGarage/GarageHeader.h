#pragma once
#include"Vehicle.h"
#include"Bicycle.h"
#include"Bus.h"
#include"Car.h"
#include"MotorCycle.h"
#include"Truck.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Garage {
protected:
	int anyVehicle;
	int numberOfVehicles;
	Vehicle* myVehicle;
	vector<Vehicle>::iterator it2;
public:
	string nameOfGarage;
	int bicycleCounter = 0;
	int carCounter = 0;
	int truckCounter = 0;
	int motorCycleCounter = 0;
	int busCounter = 0;
	vector <Vehicle*>myGarage;
	Garage() {
		anyVehicle = 0;
		numberOfVehicles = 0;
		nameOfGarage = "";

	};
	Garage(string nameOfGarageIn) {
		nameOfGarage = nameOfGarageIn;
	};

	string getNameOfGarage();
	//Här finns funktionen för hur fordonet skall läggas till
	void addVehicleAttributes();

	//Adds a vehicle to the garage. WORKS!
	void addVehicle();

	//Prints every element of the garage, WORKS!!!
	void listVehicles();

	//Searchfunction to find a specific registrationnumber in the garage, Works!!
	int searchRegistrationNumber();

	//Prints every type of vehicle and how many of them there are in the garage, WORKS! 
	void listTypeOfVehicles();

	//virtual void removeVehicles() = 0;

};