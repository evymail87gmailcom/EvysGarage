#pragma once
#include"Vehicle.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;
//Subklass Bus
class Bus :public Vehicle {
protected:
	int numberOfSeats;
public:
	Bus() {
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
		numberOfSeats = 0;
		typeOfVehicle = "Bus";
	};
	Bus(string colorIn, string brandIn, int numberOfGearsIn, string wheelsIn, int numberOfSeatsIn,string regNrIn) {
		nameOfBrand = brandIn;
		color = colorIn;
		typeOfWheels = wheelsIn;
		numberOfGears = numberOfGearsIn;
		numberOfSeats = numberOfSeatsIn;
		regNr = regNrIn;
	};
	//Adding information to the Bus-object
	void addVehicleAttributes();
	//Prints the information added
	void printVehicleAttributes();

	//Returns registration,color,nrofwheels,nrofseats,rooftype
	string getReg();
	string getColor();
	string getTypeofVehicle();
	~Bus() {};
};

