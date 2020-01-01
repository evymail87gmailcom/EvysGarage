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
	string typeOfVehicle;
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
		typeOfVehicle="";
	}
	Vehicle(string colorIn, string brandIn, string fuelIn, string regIn, int numberOfGearsIn, string wheelsIn, string typeOfGearBoxIn, int numberOfWheelsIn,string typeOfVehicleIn) {
		nameOfBrand = brandIn;
		color = colorIn;
		typeOfFuel = fuelIn;
		typeOfWheels = wheelsIn;
		typeOfGearBox = typeOfGearBoxIn;
		regNr = regIn;
		numberOfwheels = numberOfWheelsIn;
		numberOfGears = numberOfGearsIn;
		typeOfVehicle = typeOfVehicleIn;
	}
	~Vehicle() {};
	//Needs to be public to be accessed in the inheriting classes
	virtual string getReg() = 0;
	virtual string getColor() = 0;
	virtual string getTypeofVehicle() = 0;
	virtual void addVehicleAttributes() = 0;
	virtual void printVehicleAttributes() = 0;



};

