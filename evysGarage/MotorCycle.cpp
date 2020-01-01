#include "MotorCycle.h"
#include <iostream>
using namespace std;

//Adding information to the Motorcycle-object
void MotorCycle::addVehicleAttributes() {
	cout << "--------------------------------------------------------------" << endl;
	cout << "Enter nameOfBrand: ";
	cin >> nameOfBrand;
	cout << "Enter color: ";
	cin >> color;
	cout << "Enter typeOfWheels(Summer/Winter): ";
	cin >> typeOfWheels;
	cout << "Enter cc: ";
	cin >> cc;
	cout << "Enter type of fuel: ";
	cin >> typeOfFuel;
	cout << "Enter regnr: ";
	cin >> regNr;
	cout << "--------------------------------------------------------------" << endl;
}
//Prints the information added
void MotorCycle::printVehicleAttributes() {
	cout << "--------------------------------------------------------------" << endl;
	cout << "Type of Vehicle:" << typeOfVehicle << endl;
	cout << "Name:\t\t" << nameOfBrand << endl;
	cout << "Color:\t\t" << color << endl;
	cout << "Type of wheels:\t" << typeOfWheels << endl;
	cout << "CC:\t\t" << cc << endl;
	cout << "Type of fuel:\t" << typeOfFuel << endl;
	cout << "RegNr:\t\t" << regNr << endl;
	cout << "\n";
}
//Returns registration,color,type of vehicle
string MotorCycle::getReg() {
	return regNr;
}
string MotorCycle::getColor() {
	return color;
}
string MotorCycle::getTypeofVehicle() {
	return typeOfVehicle;
}