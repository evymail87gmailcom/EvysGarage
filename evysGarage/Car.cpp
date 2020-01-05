#include "Car.h"
#include <iostream>
using namespace std;


//Adding information to the Bicycle-object
void Car::addVehicleAttributes() {
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
	cout << "\t\t\t\t*\tEnter typeOfWheels(Summer/Winter/AYR): ";
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
	cout << "\t\t\t\t*\tEnter type of gearbox: ";
	cin >> typeOfGearBox;
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
	cout << "\t\t\t\t*\tEnter Rooftype: ";
	cin >> roofType;
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
void Car::printVehicleAttributes() {
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
	cout << "\t\t\t\t*\tType of Vehicle:" << typeOfVehicle << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tName:\t\t" << nameOfBrand << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tColor:\t\t" << color << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tType of wheels:\t" << typeOfWheels << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tType of gearbox:" << typeOfGearBox << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tRooftype:\t" << roofType << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tFueltype:\t" << typeOfFuel << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tRegNr:\t\t" << regNr << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;

}
//Returns registration,color,type of vehicle
string Car::getReg() {
	return regNr;
}
string Car::getColor() {
	return color;
}
string Car::getTypeofVehicle() {
	return typeOfVehicle;
}
int Car::getCounter(int x){
	int counter = x;
	counter++;
	return counter;
}
