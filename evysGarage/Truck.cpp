#include "Truck.h"
#include <iostream>
using namespace std;


//Adding information to the Truck-object
void Truck::addVehicleAttributes() {
	
	cout << "\t\t\t\t*\tEnter nameOfBrand: ";
	cin >> nameOfBrand;
	cout << "\t\t\t\t*\tEnter color: ";
	cin >> color;
	cout << "\t\t\t\t*\tEnter number of wheels: ";
	cin >> numberOfwheels;
	cout << "\t\t\t\t*\tEnter Axelconfiguration: ";
	cin >> axelConfiguration;
	cout << "\t\t\t\t*\tEnter regnr: ";
	cin >> regNr;
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
	cout << "\t\t\t\t";
	system("pause");
	system("cls");
}
//Prints the information added
void Truck::printVehicleAttributes() {
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
	cout << "\t\t\t\t*\tType of Vehicle:" << typeOfVehicle << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tName:\t\t" << nameOfBrand << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tColor:\t\t" << color << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tNumber of wheels:" << numberOfwheels << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tAxelconfiguration:" << axelConfiguration << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tRegNr:\t\t" << regNr << "\t\t\t\t     *" << endl;
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;

}
//Returns registration,color,vehicletype
string Truck::getReg() {
	return regNr;
}
string Truck::getColor() {
	return color;
}
string Truck::getTypeofVehicle() {
	return typeOfVehicle;
}
int Truck::getCounter(int x) {
	int counter = x;
	counter++;
	return counter;
}
