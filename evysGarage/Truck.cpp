#include "Truck.h"
#include <iostream>
using namespace std;


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
	cout << "Type of Vehicle:" << typeOfVehicle << endl;
	cout << "Name:\t\t" << nameOfBrand << endl;
	cout << "Color:\t\t" << color << endl;
	cout << "Type of wheels:\t" << typeOfWheels << endl;
	cout << "Number of gears:" << numberOfGears << endl;
	cout << "Axelconfiguration:" << axelConfiguration << endl;
	cout << "RegNr:\t\t" << regNr << endl;
	cout << "\n";
}
//Returns registration,color,nrofwheels,nrofseats,rooftype
string Truck::getReg() {
	return regNr;
}
string Truck::getColor() {
	return regNr;
}