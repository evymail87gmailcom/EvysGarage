#include<iostream>
#include<string>
#include <vector>
#include<istream>
#include <fstream>
#include<algorithm>
#include"MainHeader.h"

using namespace std;

int main() {
	bool buildGarage = "yes";
	int numberOfSpaces;
	string nameOfGarage;
	vector <Garage>* myGarageVector;
	Garage* myFirstGarage= new Garage();
	bool search = "y";


	for (int i = 0; i < 2; i++)
	{
		myFirstGarage->addVehicleAttributes();
		myFirstGarage->addVehicle();
	
		
	

		
		
	}
	//myFirstGarage->listVehicles();
	//loop för sökning
	while (search == true){
	myFirstGarage->searchVehicle();
	cout << "Do you wish to do another search? " << endl;
	cin >> search;

	}

	
	

	
	
}