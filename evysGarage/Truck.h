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

	//Adding information to the Truck-object
	void addVehicleAttributes();

	//Prints the information added
	void printVehicleAttributes();

	//Returns registration,color,vehicletype
	string getReg();
	string getColor();
	string getTypeofVehicle();
public:
	Truck() {
		
		typeOfFuel = "";
		typeOfGearBox = "";
		regNr = "";
		numberOfwheels = 0;
		nameOfBrand = "";
		color = "";
		typeOfWheels = "";
		numberOfGears = 0;
		axelConfiguration = "";
		typeOfVehicle = "Truck";
	};
	Truck(string brandIn, string regNrIn,string colorIn, string axelConfigurationIn,int numberOfWheelsIn) {
		typeOfVehicle = "Truck";
		nameOfBrand = brandIn;
		regNr = regNrIn;
		color = colorIn;
		numberOfwheels = numberOfWheelsIn;
		axelConfiguration = axelConfigurationIn;
	};


	~Truck() {};
};

