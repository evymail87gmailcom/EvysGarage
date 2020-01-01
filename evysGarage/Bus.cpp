#include "Bus.h"
#include <iostream>
using namespace std;

//Adding information to the Bus-object
void Bus::addVehicleAttributes() {
	cout << "--------------------------------------------------------------" << endl;
	cout << "Enter nameOfBrand: ";
	cin >> nameOfBrand;
	cout << "Enter color: ";
	cin >> color;
	cout << "Enter number of seats: ";
	cin >> numberOfSeats;
	cout << "Enter regnr: ";
	cin >> regNr;
	cout << "--------------------------------------------------------------" << endl;

}
//Prints the information added
void Bus::printVehicleAttributes() {
	cout << "--------------------------------------------------------------" << endl;
	cout << "Type of Vehicle:" << typeOfVehicle << endl;
	cout << "Name:\t\t" << nameOfBrand << endl;
	cout << "Color:\t\t" << color << endl;
	cout << "Number of seats:" << numberOfSeats << endl;
	cout << "RegNr:\t\t" << regNr << endl;
	cout << "\n";
}
//Returns registration,color,type of vehicle
string Bus::getReg() {
	return regNr;
}
string Bus::getColor() {
	return color;
}
string Bus::getTypeofVehicle() {
	return typeOfVehicle;
}