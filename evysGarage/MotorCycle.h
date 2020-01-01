#pragma once
#include"Vehicle.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;


//Subklass Motorcykel
class MotorCycle :public Vehicle {
protected:
	int cc;
	//Adding information to the Motorcycle-object
	void addVehicleAttributes();

	//Prints the information added
	void printVehicleAttributes();

	//Returns registration,color,nrofwheels,nrofseats,rooftype
	string getReg();
	string getColor();
	string getTypeofVehicle();

public:
	MotorCycle() {
		//Default f�r basklass
		typeOfFuel = "";
		typeOfGearBox = "";
		regNr = "";
		numberOfwheels = 0;
		//Specifikt f�r klassen
		nameOfBrand = "";
		color = "";
		typeOfWheels = "";
		numberOfGears = 0;
		cc = 0;
		typeOfVehicle = "Motorcycle";
	};
	MotorCycle(string colorIn, string brandIn, string typeOfWheelsIn, int ccIn,string regNrIn,string typeOfFuelIn) {
		nameOfBrand = brandIn;
		color = colorIn;
		typeOfWheels = typeOfWheelsIn;
		cc = ccIn;
		regNr = regNrIn;
		typeOfVehicle = "Motorcycle";
		typeOfFuel = typeOfFuelIn;
	};
	

	~MotorCycle() {};
};

