#include<iostream>
#include<string>
#include <vector>
#include"MainHeader.h"

using namespace std;

int main() {
	bool buildGarage = "yes";
	int numberOfSpaces;
	string nameOfGarage;
	vector <Garage>* myGarageVector;
	Garage* myFirstGarage= new Garage();
	

	for (int i = 0; i < 5; i++)
	{
		myFirstGarage->addVehicleAttributes();
		myFirstGarage->addVehicle();
		myFirstGarage->printVehicle();
	}
	//myFirstGarage->addVehicle();
	//myFirstGarage->printVehicle();
	
	

	

	
	
}