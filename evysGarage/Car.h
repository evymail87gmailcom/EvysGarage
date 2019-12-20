#pragma once
#include"Vehicle.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;
//Subklass Bil
class Car :public Vehicle {
protected:
	string roofType;
public:
	Car() {
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
		roofType = "";
	
	};
	Car(string colorIn, string brandIn, int numberOfGearsIn, string wheelsIn, string roofTypeIn) {
		nameOfBrand = brandIn;
		color = colorIn;
		typeOfWheels = wheelsIn;
		numberOfGears = numberOfGearsIn;
		roofType = roofTypeIn;
	};
	
	//Adding information to the Bicycle-object
	void addVehicleAttributes();

	//Prints the information added
	void printVehicleAttributes();

	//Returns registration,color,nrofwheels,nrofseats,rooftype
	string getReg();
	string getColor();

	~Car() {};
};

