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
	//Adding information to the Bicycle-object
	void addVehicleAttributes();

	//Prints the information added
	void printVehicleAttributes();

	//Returns registration,color,type of vehicle
	string getReg();
	string getColor();
	string getTypeofVehicle();
public:
	Car() {
		
		typeOfFuel = "";
		typeOfGearBox = "";
		regNr = "";
		numberOfwheels = 0;
		nameOfBrand = "";
		color = "";
		typeOfWheels = "";
		numberOfGears = 0;
		roofType = "";
		typeOfVehicle = "Car";
	};
	Car(string brandIn,string regNrIn, string colorIn,  string typeOfGearBoxIn , string typeOfWheelsIn, string typeOfFuelIn, string roofTypeIn) {
		nameOfBrand = brandIn;
		regNr = regNrIn;
		color = colorIn;
		typeOfWheels = typeOfWheelsIn;
		typeOfGearBox = typeOfGearBoxIn;
		typeOfFuel=typeOfFuelIn;
		typeOfVehicle = "Car";
		numberOfwheels = 4;
		roofType = roofTypeIn;
	};
	


	~Car() {};
};

