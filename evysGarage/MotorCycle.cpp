#include "MotorCycle.h"
#include <iostream>
using namespace std;

//Adding information to the Motorcycle-object
void MotorCycle::addVehicleAttributes() {
	while (true) {
	cout << "\t\t\t\t*\tEnter nameOfBrand: ";
	cin >> nameOfBrand;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
	}
	else {
		break;
	}
	}
	while (true) {
	cout << "\t\t\t\t*\tEnter color: ";
	cin >> color;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
	}
	else {
		break;
	}
	}
	while (true) {
	cout << "\t\t\t\t*\tEnter typeOfWheels(Summer/Winter): ";
	cin >> typeOfWheels;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
	}
	else {
		break;
	}
	}
	while (true) {
	cout << "\t\t\t\t*\tEnter cc: ";
	cin >> cc;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
	}
	else {
		break;
	}
	}
	while (true) {
	cout << "\t\t\t\t*\tEnter type of fuel: ";
	cin >> typeOfFuel;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
	}
	else {
		break;
	}
	}
	while (true) {
	cout << "\t\t\t\t*\tEnter regnr: ";
	cin >> regNr;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
	}
	else {
		break;
	}
	}
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
	cout << "\t\t\t\t";
	system("pause");
	system("cls");
}
//Prints the information added
void MotorCycle::printVehicleAttributes() {
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
	cout << "\t\t\t\t*\tType of Vehicle:" << typeOfVehicle << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tName:\t\t" << nameOfBrand << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tColor:\t\t" << color << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tType of wheels:\t" << typeOfWheels << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tCC:\t\t" << cc << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tType of fuel:\t" << typeOfFuel << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tRegNr:\t\t" << regNr << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;

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
int MotorCycle::getCounter(int x) {
	counter = x;
	counter++;
	return counter;
}
