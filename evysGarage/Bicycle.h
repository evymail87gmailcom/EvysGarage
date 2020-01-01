#pragma once
#include"Vehicle.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Bicycle :public Vehicle {
protected:
	string typeOfBike;
	string electric;

public:

	Bicycle() {

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
		typeOfBike = "";
		electric = "Unknown";
		typeOfVehicle = "Bicycle";
	};
	//To add a default-bike
	Bicycle(string brandIn, string colorIn, int numberOfGearsIn, string typeOfWheelsIn, string typeOfBikeIn, string electricIn) {
		typeOfVehicle = "Bicycle";
		nameOfBrand = brandIn;
		color = colorIn;
		typeOfWheels = typeOfWheelsIn;
		numberOfGears = numberOfGearsIn;
		typeOfBike = typeOfBikeIn;
		electric = electricIn;
	};
	//Adding information to the Bicycle-object
	void addVehicleAttributes();

	//Prints the information added
	void printVehicleAttributes();

	//Returns registration,color,nrofwheels,nrofseats,rooftype
	string getReg();
	string getColor();
	string getTypeofVehicle();
	~Bicycle() {};
};


