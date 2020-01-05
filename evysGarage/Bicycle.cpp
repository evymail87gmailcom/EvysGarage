#include "Bicycle.h"
#include <iostream>
using namespace std;

//Adding information to the Bicycle-object
void Bicycle::addVehicleAttributes() {
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
		cout << "\t\t\t\t*\tEnter numberOfGears: ";
		cin >> numberOfGears;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(256, '\n');
		}
		else {
			break;
		}
	}
	while (true) {
		cout << "\t\t\t\t*\tEnter typeOfBike: ";
		cin >> typeOfBike;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(256, '\n');
		}
		else {
			break;
		}
	}
	while (true) {
		cout << "\t\t\t\t*\tEnter if it is an electric-bike(yes/no): ";
		cin >> electric;
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
void Bicycle::printVehicleAttributes() {

	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
	cout << "\t\t\t\t*\tType of Vehicle:" << typeOfVehicle << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tName:\t\t" << nameOfBrand << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tColor:\t\t" << color << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tType of wheels:\t" << typeOfWheels << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tNumber of gears:" << numberOfGears << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tType of bike:\t" << typeOfBike << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tElectric:\t" << electric << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
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
int Bicycle::getCounter(int x) {
	counter = x;
	counter++;
	return counter;
}

