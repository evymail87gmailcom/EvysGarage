#include<iostream>
#include<string>
#include <vector>
#include"GarageHeader.h"
#include"Vehicle.h"
using namespace std;
//UI
int main() {
	bool buildGarage = "yes";
	int numberOfSpaces = 0;
	string nameOfMyGarage;
	vector <Garage>* myGarageVector=new vector<Garage>;
	bool choose = "y";
	int menuChoice = 0;

	//Mainmenu-Chooses wheter to create a garage or not
	cout << "Hello!" << endl;
	cout << "Would you like to add a new garage to your collection? yes=1/no=0" << endl;
	cin >> choose;
	while (choose = 1) {
		do {

			//Gives the garage a specific attribute-name
			cout << "What would you like to call your garage?" << endl;
			cin >> nameOfMyGarage;

			//Creation of garage-object per parameterized constructor
			Garage* myNewGarage = new Garage(nameOfMyGarage);
			
			//How many Vehicles we would like to add to the garage
			cout << "Enter the number of spaces you want in your garage: " << endl;
			cin >> numberOfSpaces;
			
			//Adds the garage to a greater collection of garages when the basic garageattributes are given. Spaces are 0 due to push.back when attributes are given
			//myGarageVector->push_back(myNewGarage[numberOfSpaces]);
			
			//Prints how many garages there are in the system
			//cout << "number of garages: " << myGarageVector->size() << endl;
			
			
			

			//Actually inputs Vehicles
			for (int i = 0; i < numberOfSpaces; i++)
			{
				myNewGarage->addVehicleAttributes();
				myNewGarage->addVehicle();
			}

			myNewGarage->listVehicles();
			myNewGarage->removeVehicle();
			myNewGarage->listVehicles();
			
			//Prints the name of the garage
			//myNewGarage->printGarage();
			//myNewGarage->listVehicles();

			//myNewGarage->removeVehicle();

			//Searchmenu
			cout << "Press 1 to Search for registrationnumbers in the garage" << endl;
			cout << "Press 2 to Search for a specific color in the garage" << endl;
			cout << "Press 3 to Search for number of wheels in the garage" << endl;
			cout << "Press 4 to Search for minimum number of seats in the garage" << endl;
			cout << "Press 5 to Searchfor a type of vehicle in the garage" << endl;
			cin >> menuChoice;


			//myNewGarage->listTypeOfVehicles();

			switch (menuChoice)
			{
			case 1: {
				do {
					myNewGarage->searchRegistrationNumber();
					cout << "Do you wish to do another search, press 1 Or to get back to the searchmenu press 0" << endl;
					cin >> choose;
				} while (choose == true);
				break;
			}
			case 2: {
				do {
					myNewGarage->searchColor();
					cout << "Do you wish to do another search, press 1 Or to get back to the searchmenu press 0" << endl;
					cin >> choose;
				} while (choose == true);
				break;
			}
			case 3: {

			}
			case 4: {

			}
			case 5: {
				do {
					myNewGarage->searchVehicleType();
					cout << "Do you wish to do another search, press 1 Or to get back to the searchmenu press 0" << endl;
					cin >> choose;
				} while (choose == true);
				break;
			}
			default:
				break;
			}
			cout << "Would you like to add another garage to your collection? yes=1/no=0" << endl;
			cin >> choose;

			//Prints the name of the garage and the number of spaces that are inputted
			

		} while (choose == true);

	}
}

