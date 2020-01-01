#include "Car.h"
#include <iostream>
using namespace std;


//Adding information to the Bicycle-object
void Car::addVehicleAttributes() {
	cout << "--------------------------------------------------------------" << endl;
	cout << "Enter nameOfBrand: ";
	cin >> nameOfBrand;
	cout << "Enter color: ";
	cin >> color;
	cout << "Enter typeOfWheels(Summer/Winter/AYR): ";
	cin >> typeOfWheels;
	cout << "Enter type of gearbox: ";
	cin >> typeOfGearBox;
	cout << "Enter type of fuel: ";
	cin >> typeOfFuel;
	cout << "Enter Rooftype: ";
	cin >> roofType;
	cout << "Enter regnr: ";
	cin >> regNr;
	cout << "--------------------------------------------------------------" << endl;
}
//Prints the information added
void Car::printVehicleAttributes() {
	cout << "--------------------------------------------------------------" << endl;
	cout << "Type of Vehicle:" << typeOfVehicle << endl;
	cout << "Name:\t\t" << nameOfBrand << endl;
	cout << "Color:\t\t" << color << endl;
	cout << "Type of wheels:\t" << typeOfWheels << endl;
	cout << "Type of gearbox:" << typeOfGearBox << endl;
	cout << "Rooftype:\t" << roofType << endl;
	cout << "Fueltype:\t" << typeOfFuel << endl;
	cout << "RegNr:\t\t" << regNr << endl;
	cout << "\n";
}
//Returns registration,color,nrofwheels,nrofseats,rooftype
string Car::getReg() {
	return regNr;
}
string Car::getColor() {
	return color;
}
string Car::getTypeofVehicle() {
	return typeOfVehicle;
}