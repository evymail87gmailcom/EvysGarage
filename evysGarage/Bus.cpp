#include "Bus.h"
#include <iostream>
using namespace std;

//Adding information to the Bus-object
void Bus::addVehicleAttributes() {
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
	cout << "\t\t\t\t*\tEnter number of seats: ";
	cin >> numberOfSeats;
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
void Bus::printVehicleAttributes() {
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
	cout << "\t\t\t\t*\tType of Vehicle:" << typeOfVehicle << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tName:\t\t" << nameOfBrand << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tColor:\t\t" << color << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tNumber of seats:" << numberOfSeats << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tRegNr:\t\t" << regNr << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;

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
int Bus::getCounter(int x) {
	counter = x;
	counter++;
	return counter;
};
