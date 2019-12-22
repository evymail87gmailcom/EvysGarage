#include "Bus.h"
#include <iostream>
using namespace std;

//Adding information to the Bus-object
void Bus::addVehicleAttributes() {
	cout << "Enter nameOfBrand: ";
	cin >> nameOfBrand;
	cout << "Enter color: ";
	cin >> color;
	cout << "Enter typeOfWheels(Summer/Winter): ";
	cin >> typeOfWheels;
	cout << "Enter type of gearbox: ";
	cin >> typeOfGearBox;
	cout << "Enter number of seats: ";
	cin >> numberOfSeats;
	cout << "Enter regnr: ";
	cin >> regNr;

}
//Prints the information added
void Bus::printVehicleAttributes() {
	cout << "Type of Vehicle:" << typeOfVehicle << endl;
	cout << "Name:\t\t" << nameOfBrand << endl;
	cout << "Color:\t\t" << color << endl;
	cout << "Type of wheels:\t" << typeOfWheels << endl;
	cout << "Type of gearbox:" << typeOfGearBox<< endl;
	cout << "Number of seats:" << numberOfSeats << endl;
	cout << "RegNr:\t\t" << regNr << endl;
	cout << "\n";
}
//Returns registration,color,nrofwheels,nrofseats,rooftype
string Bus::getReg() {
	return regNr;
}
string Bus::getColor() {
	return color;
}
string Bus::getTypeofVehicle() {
	return typeOfVehicle;
}