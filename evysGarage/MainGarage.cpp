#include<iostream>
#include<string>
#include <vector>
#include"GarageHeader.h"
#include"Vehicle.h"
using namespace std;
//UI
int main() {
	
	int numberOfSpaces = 0;
	string nameOfMyGarage;
	vector <Garage*> myGarageVector;
	bool choose = "y";
	int chooseGarage = 0;
	
	Garage* myNewGarage = new Garage(nameOfMyGarage);

	//Mainmenu-Chooses wheter to create a garage or not
	cout << "Hello!" << endl;

	while (true) {
		do {
			cout << "--------------------------------------------------------------" << endl;
			cout << "Press 1 to add a new garage to your collection?" << endl;
			cout << "Press 2 to use a default garage" << endl;
			cout << "--------------------------------------------------------------" << endl;
			cin >> chooseGarage;
			system("cls");

			switch (chooseGarage)
			{
				//Manually adds a Garage
			case 1: {

				myNewGarage->addGarage();
				myNewGarage->editGarage();
				myNewGarage->printGarage(numberOfSpaces);
				break;
			}

			 //Creates a garage with 10 pre-made vehicles
			case 2: {
				myNewGarage->addDefaultGarage();
				myNewGarage->editGarage();

			}
			default:
				break;

			}
			//Adds the garage to a greater collection of garages when the basic garageattributes are given. Replaces the garage at element 0 with the next garage
			myGarageVector.push_back(myNewGarage);



			cout << "Number of garages in the company " << myGarageVector.size() << endl;




		} while (choose == true);


	}
}


