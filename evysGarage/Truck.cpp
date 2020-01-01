#include "Truck.h"
#include <iostream>
using namespace std;


//Adding information to the Truck-object
void Truck::addVehicleAttributes() {
	cout << "--------------------------------------------------------------" << endl;
	cout << "Enter nameOfBrand: ";
	cin >> nameOfBrand;
	cout << "Enter color: ";
	cin >> color;
	cout << "Enter number of wheels: ";
	cin >> numberOfwheels;
	cout << "Enter Axelconfiguration: ";
	cin >> axelConfiguration;
	cout << "Enter regnr: ";
	cin >> regNr;
	cout << "--------------------------------------------------------------" << endl;
}
//Prints the information added
void Truck::printVehicleAttributes() {
	cout << "--------------------------------------------------------------" << endl;
	cout << "Type of Vehicle:" << typeOfVehicle << endl;
	cout << "Name:\t\t" << nameOfBrand << endl;
	cout << "Color:\t\t" << color << endl;
	cout << "Number of wheels:" << numberOfwheels << endl;
	cout << "Axelconfiguration:" << axelConfiguration << endl;
	cout << "RegNr:\t\t" << regNr << endl;
	cout << "\n";
}
//Returns registration,color,vehicletype
string Truck::getReg() {
	return regNr;
}
string Truck::getColor() {
	return regNr;
}
string Truck::getTypeofVehicle() {
	return typeOfVehicle;
}