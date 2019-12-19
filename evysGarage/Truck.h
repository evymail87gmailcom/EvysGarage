#pragma once
#include"Vehicle.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;
//Subklass Lastbil
class Truck :public Vehicle {
protected:
	string axelConfiguration;
public:
	Truck() {
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
		axelConfiguration = "";
	};
	Truck(string colorIn, string brandIn, int numberOfGearsIn, string wheelsIn, string axelConfigurationIn) {
		nameOfBrand = brandIn;
		color = colorIn;
		typeOfWheels = wheelsIn;
		numberOfGears = numberOfGearsIn;
		axelConfiguration = axelConfigurationIn;
	};
	//Returns registrationnumber
	string getReg();
	
	//Adding information to the Truck-object
	void addVehicleAttributes();
	
	//Prints the information added
	void printVehicleAttributes();

	~Truck() {};
};

