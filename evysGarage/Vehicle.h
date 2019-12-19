#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Vehicle
{
protected:
	string color;
	string nameOfBrand;
	string typeOfFuel;
	string typeOfWheels;
	string typeOfGearBox;
	string regNr;
	int numberOfwheels;
	int numberOfGears;

public:
	Vehicle() {
		nameOfBrand = "";
		color = "";
		typeOfFuel = "";
		typeOfWheels = "";
		typeOfGearBox = "";
		regNr = "";
		numberOfwheels = 0;
		numberOfGears = 0;
	}
	Vehicle(string colorIn, string brandIn, string fuelIn, string regIn, int numberOfGearsIn, string wheelsIn, string typeOfGearBoxIn, int numberOfWheelsIn) {
		nameOfBrand = brandIn;
		color = colorIn;
		typeOfFuel = fuelIn;
		typeOfWheels = wheelsIn;
		typeOfGearBox = typeOfGearBoxIn;
		regNr = regIn;
		numberOfwheels = numberOfWheelsIn;
		numberOfGears = numberOfGearsIn;

	}
	~Vehicle() {};
	//Dessa återfinns i de ärvande klasserna
	virtual string getReg() = 0;
	virtual void addVehicleAttributes() = 0;
	virtual void printVehicleAttributes() = 0;



};

