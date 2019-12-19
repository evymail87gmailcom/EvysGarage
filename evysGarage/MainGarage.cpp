#include<iostream>
#include<string>
#include <vector>
#include"GarageHeader.h"
#include"Vehicle.h"
using namespace std;
//UI
int main() {
	bool buildGarage = "yes";
	int numberOfSpaces;
	string nameOfGarage;
	vector <Garage>* myGarageVector;
	Garage* myFirstGarage = new Garage();
	bool choose = "y";



	cout << "Hello!" << endl;
	cout << "Would you like to add a new garage to your collection? yes=1/no=0" << endl;
	cin >> choose;
	
	






	cout << "Enter the number of spaces you want in your garage: " << endl;
	cin >> numberOfSpaces;
	for (int i = 0; i < numberOfSpaces; i++)
	{
		myFirstGarage->addVehicleAttributes();
		myFirstGarage->addVehicle();
	}
	myFirstGarage->listVehicles();
	//loop för sökning
	cout << "Press 1 to Search for registrationnumbers in the garage" << endl;
	cin >> choose;
	while (choose == true)
	{
		myFirstGarage->searchVehicle();
		cout << "Do you wish to do another search? yes=1/no=0" << endl;
		cin >> choose;
	}
	myFirstGarage->listTypeOfVehicles();





}