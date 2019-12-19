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
		electric = "yes";
	};
	//Skall ej beh�vas f�r att k�ra programmet men g�r att anv�nda f�r att l�gga till som kontrollfunktion
	Bicycle(string colorIn, string brandIn, int numberOfGearsIn, string wheelsIn, string typeOfBikeIn, bool electricIn) {
		nameOfBrand = brandIn;
		color = colorIn;
		typeOfWheels = wheelsIn;
		numberOfGears = numberOfGearsIn;
		typeOfBike = typeOfBikeIn;
		electric = electricIn;
	};
	//Adding information to the Bicycle-object
	void addVehicleAttributes();

	//Prints the information added
	void printVehicleAttributes();

	//Returns 
	string getReg();

	~Bicycle() {};
};


