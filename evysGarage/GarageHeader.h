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
private:
	int anyVehicle;
	Vehicle* myVehicle;
	vector <Vehicle*>myGarage;
	string nameOfGarage;
	int bicycleCounter = 0;
	int carCounter = 0;
	int truckCounter = 0;
	int motorCycleCounter = 0;
	int busCounter = 0;
	int numberOfVehicles = 0;
	string getNameOfGarage();
	Garage* myMainGarage;
	vector<Garage*> myMainGarageVector;
	//submenu for removing vehicles
	void removeVehicle();

	int getSizeOfGarage();

	//Function to add specifik vehicle attributes
	void addVehicleAttributes();

	//Adds a vehicle to the garage. WORKS!
	void addVehicle();

	//Prints every element of the garage, WORKS!!!
	void listVehicles();

	//Searchfunction to find a specific registrationnumber in the garage, Works!!
	void searchRegistrationNumber();

	void searchColor();
	void searchVehicleType();

	//Prints the name of the garage
	void printGarageNameAndSpots(int numberofSpots);
	void searchMenu();
	//Prints every type of vehicle and how many of them there are in the garage, WORKS! 
	void listTypeOfVehicles();
	void addDefaultGarage();
	void addGarage();
	void editGarage();

public:
	Garage() {
		anyVehicle = 0;
		numberOfVehicles = 0;
		nameOfGarage = "";
	};
	Garage(string nameOfGarageIn) {
		nameOfGarage = nameOfGarageIn;
	};

	void startPogram();

	~Garage() {};
};