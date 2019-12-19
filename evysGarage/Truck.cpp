#include "Truck.h"
#include <iostream>
using namespace std;

//Returns registrationnumber
string Truck::getReg() {
	return regNr;
}
//Adding information to the Truck-object
void Truck::addVehicleAttributes() {
	cout << "Enter nameOfBrand: ";
	cin >> nameOfBrand;
	cout << "Enter color: ";
	cin >> color;
	cout << "Enter typeOfWheels(Summer/Winter): ";
	cin >> typeOfWheels;
	cout << "Enter Axelconfiguration: ";
	cin >> axelConfiguration;
	cout << "Enter regnr: ";
	cin >> regNr;
}
//Prints the information added
void Truck::printVehicleAttributes() {
	cout << "\n";
	cout << "Name:\t\t" << nameOfBrand << endl;
	cout << "Color:\t\t" << color << endl;
	cout << "Type of wheels:\t" << typeOfWheels << endl;
	cout << "Number of gears:" << numberOfGears << endl;
	cout << "Axelconfiguration:" << axelConfiguration << endl;
	cout << "RegNr:\t\t" << regNr << endl;
	cout << "\n";
}