#include "MotorCycle.h"
#include <iostream>
using namespace std;

//Adding information to the Motorcycle-object
void MotorCycle::addVehicleAttributes() {
	cout << "Enter nameOfBrand: ";
	cin >> nameOfBrand;
	cout << "Enter color: ";
	cin >> color;
	cout << "Enter typeOfWheels(Summer/Winter): ";
	cin >> typeOfWheels;
	cout << "Enter numberOfGears: ";
	cin >> numberOfGears;
	cout << "Enter cc: ";
	cin >> cc;
	cout << "Enter regnr: ";
	cin >> regNr;
}
//Prints the information added
void MotorCycle::printVehicleAttributes() {
	cout << "\n";
	cout << "Name:\t\t" << nameOfBrand << endl;
	cout << "Color:\t\t" << color << endl;
	cout << "Type of wheels:\t" << typeOfWheels << endl;
	cout << "Number of gears:" << numberOfGears << endl;
	cout << "CC:\t\t" << cc << endl;
	cout << "RegNr:\t\t" << regNr << endl;
	cout << "\n";

}
//Returns registrationnumber
string MotorCycle::getReg() {
	return regNr;
}