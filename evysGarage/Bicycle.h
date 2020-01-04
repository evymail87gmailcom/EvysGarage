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
	int counter;
	//Adding information to the Bicycle-object
	void addVehicleAttributes();

	//Prints the information added
	void printVehicleAttributes();

	//Returns registration,color,type of vehicle
	string getReg();
	string getColor();
	string getTypeofVehicle();
	int getCounter(int x);
	
public:
	int bicycletempcount;
	Bicycle() {
		
		typeOfFuel = "";
		typeOfGearBox = "";
		regNr = "";
		numberOfwheels = 0;
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

	~Bicycle() {};
};


