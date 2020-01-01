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
	
	
	
	

	//Mainmenu-Chooses wether to create a garage or not
	cout << "Welcome!" << endl;
	int chooseGarage = 0;
	
		do {
			
			cout << "--------------------------------------------------------------" << endl;
			cout << "Press 1 to add a new garage to your collection" << endl;
			cout << "Press 2 to use a default garage" << endl;
			cout << "Press 3 to list vehicletypes" << endl;
			cout << "Press 0 to exit program" << endl;
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
			case 3: {
				myNewGarage->listTypeOfVehicles();
				cout << "Number of garages in the company " << myGarageVector.size() << endl;
			}
			default:
				break;

			}
			
			
		
		
			
			
		} while (chooseGarage !=0);


		cout << "Program ended without errors" << endl;
		return 0;
	
		delete myNewGarage;
}


