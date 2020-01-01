#include "Bicycle.h"
#include <iostream>
using namespace std;

//Adding information to the Bicycle-object
void Bicycle::addVehicleAttributes() {

	cout << "Enter nameOfBrand: ";
	cin >> nameOfBrand;
	cout << "Enter color: ";
	cin >> color;
	cout << "Enter typeOfWheels(Summer/Winter): ";
	cin >> typeOfWheels;
	cout << "Enter numberOfGears: ";
	cin >> numberOfGears;
	cout << "Enter typeOfBike: ";
	cin >> typeOfBike;
	cout << "Enter if it is an electric-bike(yes/no): ";
	cin >> electric;
	cout << "--------------------------------------------------------------" << endl;
}
//Prints the information added
void Bicycle::printVehicleAttributes() {
	cout << "--------------------------------------------------------------" << endl;
	cout << "Type of Vehicle:"<<typeOfVehicle<<endl;
	cout << "Name:\t\t" << nameOfBrand << endl;
	cout << "Color:\t\t" << color << endl;
	cout << "Type of wheels:\t" << typeOfWheels << endl;
	cout << "Number of gears:" << numberOfGears << endl;
	cout << "Type of bike:\t" << typeOfBike << endl;
	cout << "Electric:\t" << electric << endl;
	cout << "\n";
}
//Returns registration,color,type of vehicle
string Bicycle::getReg() {
	return regNr;
}
string Bicycle::getColor() {
	return color;
}
string Bicycle::getTypeofVehicle() {
	return typeOfVehicle;
}
