#include"GarageHeader.h"
#include <iostream>
using namespace std;

//Här finns funktionen för hur fordonet skall läggas till
void Garage::addVehicleAttributes() {
	cout << "Choose the type of vehicle you would like to add: " << endl;
	cout << "1 for Bicycle: " << endl;
	cout << "2 for Motorcycle: " << endl;
	cout << "3 for Car: " << endl;
	cout << "4 for Truck: " << endl;
	cout << "5 for Bus: " << endl;
	cin >> anyVehicle;
	switch (anyVehicle)
	{
	case 1: {
		myVehicle = new Bicycle();
		cout << "One bike it is! " << endl;
		cout << "Please register your Bicycle: " << endl;
		myVehicle->addVehicleAttributes();
		bicycleCounter++;
		break;
	}
	case 2: {
		myVehicle = new MotorCycle();
		cout << "One Motorbike it is! " << endl;
		cout << "Please register your Motorcycle: " << endl;
		myVehicle->addVehicleAttributes();
		motorCycleCounter++;
		break;
	}
	case 3: {
		myVehicle = new Car();
		cout << "One car it is! " << endl;
		cout << "Please register your car: " << endl;
		myVehicle->addVehicleAttributes();
		carCounter++;
		break;
	}
	case 4: {
		myVehicle = new Truck();
		cout << "One truck it is! " << endl;
		cout << "Please register your truck: " << endl;
		myVehicle->addVehicleAttributes();
		truckCounter++;
		break;
	}
	case 5: {
		myVehicle = new Bus();
		cout << "One bus it is! " << endl;
		cout << "Please register your bus: " << endl;
		myVehicle->addVehicleAttributes();
		busCounter++;
	}
	default:
		break;
	}
};
//Returns the name of the garage
string Garage::getNameOfGarage(){
	return nameOfGarage;
}
//Adds a vehicle to the garage. WORKS!
void Garage::addVehicle() {
	myGarage.push_back(myVehicle);
	cout << "Pushed back!" << endl;
}

//Prints every element of the garage, WORKS!!!
void Garage::listVehicles() {
	for (int i = 0; i < myGarage.size(); i++)
	{
		myGarage[i]->printVehicleAttributes();
	}
	cout << "I printed a garage!" << endl;
}

//Searchfunction to find a specific registrationnumber in the garage, Works!!
int Garage::searchRegistrationNumber() {

	cout << "Enter the regnr to search for: " << endl;
	bool foundVehicle = 0;
	string input;
	cin >> input;

	for (auto i = 0; i != myGarage.size(); i++)
	{
		string regNr = myGarage[i]->getReg();
		if (regNr == input) {
			cout << "Found vehicle at parkingspot nr: " << i + 1 << endl;
			/*Here a light could be connected at each parkingspot , and lights up when found at the corresponding elementposition*/
			//returns the elementslot for the found object
			return i;
			foundVehicle = true;
		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundVehicle == false) {
		cout << "No vehicle with the selected registration was found" << endl;
	}
	return -1;
}
//Searchfunction to find a specific color in the garage, Works!!
int Garage::searchColor() {

	cout << "Enter the color to search for: " << endl;
	bool foundVehicle = 0;
	string input;
	cin >> input;

	for (auto i = 0; i != myGarage.size(); i++)
	{
		string color = myGarage[i]->getColor();
		if (color == input) {
			cout << "Found a "<<color<<" vehicle at parkingspot nr: " << i + 1 << endl;
			/*Here a light could be connected at each parkingspot , and lights up when found at the corresponding elementposition*/
			//returns the elementslot for the found object
			return i;
			foundVehicle = true;
			continue;
		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundVehicle == false) {
		cout << "No vehicle with the selected registration was found" << endl;
	}
	return -1;
}

//Prints every type of vehicle and how many of them there are in the garage, WORKS! 
void Garage::listTypeOfVehicles() {
	cout << "Name of garage" << nameOfGarage << endl;
	cout << "Type of vehicle:\t" << "Number of vehicles:\t" << endl;
	cout << "Bicycles:\t\t" << bicycleCounter << endl;
	cout << "Cars:\t\t\t" << carCounter << endl;
	cout << "Trucks:\t\t\t" << truckCounter << endl;
	cout << "Motorcycles:\t\t" << motorCycleCounter << endl;
	cout << "Bus:\t\t\t" << busCounter << endl;
}
//Prints the name of the garage
void Garage::printGarage() {
	cout <<"Contents of garage: " <<nameOfGarage<< ": "<< endl;
}
//virtual void removeVehicles() = 0;
