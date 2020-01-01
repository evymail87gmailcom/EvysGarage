#include<iostream>
#include<string>
#include <vector>
#include"GarageHeader.h"
#include"Vehicle.h"
using namespace std;
//UI
int main() {
	

	string nameOfMyGarage;
	vector <Garage*> myGarageVector;
	Garage* myNewGarage = new Garage(nameOfMyGarage);
	bool choose = "y";
	
	
	

	//Mainmenu-Chooses wheter to create a garage or not
	cout << "Hello!" << endl;

	
		do {
			int chooseGarage = 0;
			cout << "--------------------------------------------------------------" << endl;
			cout << "Press 1 to add a new garage to your collection?" << endl;
			cout << "Press 2 to use a default garage" << endl;
			cout << "Press 3 to list all existing garages" << endl;
			cout << "--------------------------------------------------------------" << endl;
			cin >> chooseGarage;
			system("cls");

			switch (chooseGarage)
			{
				//Manually adds a Garage
			case 1: {
				
				myNewGarage->addGarage();
				myGarageVector.push_back(myNewGarage);
				break;
			}

			 //Creates a garage with 10 pre-made vehicles
			case 2: {
				myNewGarage->addDefaultGarage();
				myNewGarage->editGarage();
				myGarageVector.push_back(myNewGarage);
				break;
			}
			case 3: {//Only prints the last garage Make a function
			
			
					//myNewGarage->printGarageNameAndSpots();
					//myGarageVector[0]->listVehicles();
					//myGarageVector[1]->listVehicles();
					//myNewGarage->listVehicles();

				
			}
			default:
				break;

			}
			
			
			cout << "Number of garages in the company " << myGarageVector.size() << endl;
			myNewGarage->listTypeOfVehicles();
			cout << "Do you wish to return to Main Menu? Yes = 1/ No=0" << endl;
			cin >> choose;
			system("cls");
		} while (choose == 1);

	
	
		delete myNewGarage;
}


