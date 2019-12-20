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

public:
	MotorCycle() {
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
		cc = 0;
	};
	MotorCycle(string colorIn, string brandIn, int numberOfGearsIn, string wheelsIn, int ccIn,string regNrIn) {
		nameOfBrand = brandIn;
		color = colorIn;
		typeOfWheels = wheelsIn;
		numberOfGears = numberOfGearsIn;
		cc = ccIn;
		regNr = regNrIn;
	};
	
	//Adding information to the Motorcycle-object
	void addVehicleAttributes();
	
	//Prints the information added
	void printVehicleAttributes();
	
	//Returns registration,color,nrofwheels,nrofseats,rooftype
	string getReg();
	string getColor();
	~MotorCycle() {};
};

