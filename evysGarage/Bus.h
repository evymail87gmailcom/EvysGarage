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
	int counter;
	//Adding information to the Bus-object
	void addVehicleAttributes();
	//Prints the information added
	void printVehicleAttributes();

	//Returns registration,color,type of vehicle
	string getReg();
	string getColor();
	string getTypeofVehicle();
	int getCounter(int x);
	
public:
	Bus() {
		
		typeOfFuel = "";
		typeOfGearBox = "";
		regNr = "";
		numberOfwheels = 0;
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

