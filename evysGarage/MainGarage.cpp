#include<iostream>
#include<string>
#include <vector>
#include"MainHeader.h"

using namespace std;

int main() {
	bool buildGarage = "yes";
	int numberOfSpaces;
	string nameOfGarage;
	//vector <Garage>* myGarageVector;
	Garage* myFirstGarage = new Garage();
	
	myFirstGarage->addVehicleAttributes();
	myFirstGarage->addVehicle();
	myFirstGarage->printVehicle();
	
	


	

	
	
}