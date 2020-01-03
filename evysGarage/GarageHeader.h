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
	
	Garage* myMainGarage;
	vector<Garage*> myMainGarageVector;
	
	//submenu for removing vehicles
	void removeVehicle();
	//Function to add specific vehicle attributes
	void addVehicleAttributes();

	//Adds a vehicle to the garage
	void addVehicle();

	//Prints every element of the garage
	void listVehicles();

	//Searchfunctions to find a specific registrationnumbers, colors or vehicletype in the garage
	void searchRegistrationNumber();
	void searchColor();
	void searchVehicleType();

	//Prints the name of the garage
	
	void searchMenu();

	//Prints every type of vehicle and how many of them there are in the garage
	void listTypeOfVehicles();
	
	


	
public:
	Garage() {
		anyVehicle = 0;
		numberOfVehicles = 0;
		nameOfGarage = "";
	};
	Garage(string nameOfGarageIn) {
		nameOfGarage = nameOfGarageIn;
	};

	void addDefaultGarage();
	void addGarage();
	int getNumberOfSpots();
	string getNameOfGarage();
	void editGarage();
	void printGarageNameAndSpots(int numberofSpots);
	int getSizeOfGarage();
	
	

	~Garage() {};
};