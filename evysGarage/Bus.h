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
	//Adding information to the Bus-object
	void addVehicleAttributes();
	//Prints the information added
	void printVehicleAttributes();

	//Returns registration,color,nrofwheels,nrofseats,rooftype
	string getReg();
	string getColor();
	string getTypeofVehicle();
public:
	Bus() {
		//Default för basklass
		typeOfFuel = "";
		typeOfGearBox = "";
		regNr = "";
		numberOfwheels = 0;
		//Specifikt för klassen
		nameOfBrand = "";
		color = "";
		typeOfWheels = "";
		numberOfGears = 0;
		numberOfSeats = 0;
		typeOfVehicle = "Bus";
	};
	Bus(string brandIn, string colorIn, int numberOfSeatsIn,string regNrIn) {
		nameOfBrand = brandIn;
		color = colorIn;
		numberOfSeats = numberOfSeatsIn;
		typeOfVehicle = "Bus";
		regNr = regNrIn;
	};

	~Bus() {};
};

