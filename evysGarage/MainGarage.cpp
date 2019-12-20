#include<iostream>
#include<string>
#include <vector>
#include"GarageHeader.h"
#include"Vehicle.h"
using namespace std;
//UI
int main() {
	bool buildGarage = "yes";
	int numberOfSpaces=0;
	string nameOfMyGarage;
	vector <Garage>* myGarageVector;
	bool choose = "y";
	int menuChoice = 0;

	//Mainmenu-Chooses wheter to create a garage or not
	cout << "Hello!" << endl;
	cout << "Would you like to add a new garage to your collection? yes=1/no=0" << endl;
	cin >> choose;

	do {
		//Creation of garage-object
		Garage* myNewGarage = new Garage();

		//Gives the garage a specific attribute-name
		cout << "What would you like to call your garage?" << endl;
		cin >> nameOfMyGarage;
			
		myNewGarage->nameOfGarage(nameOfMyGarage);

		//How many Vehicles we would like to add to the garage
		cout << "Enter the number of spaces you want in your garage: " << endl;
		cin >> numberOfSpaces;
		for (int i = 0; i < numberOfSpaces; i++)
		{
			//myNewGarage->addVehicleAttributes();
			myNewGarage->addVehicle();
		}

		
		myNewGarage->listVehicles();
		//loop för sökning
		cout << "Press 1 to Search for registrationnumbers in the garage" << endl;
		cout << "Press 2 to Search for a specific color in the garage" << endl;
		cout << "Press 3 to Search for number of wheels in the garage" << endl;
		cout << "Press 4 to Search for minimum number of seats in the garage" << endl;
		cout << "Press 5 to Search for convertibles in the garage" << endl;
		cin >> menuChoice;
		
	
		//myNewGarage->listTypeOfVehicles();
		
		switch (menuChoice)
		{
		case 1: {
			do{
			myNewGarage->searchRegistrationNumber();
			cout << "Do you wish to do another search, press 1 Or to get back to the searchmenu press 0" << endl;
			cin >> choose;
			} while (choose == true);
			//break;
		}
		default:
			break;
		}
		cout << "Would you like to add another garage to your collection? yes=1/no=0" << endl;
		cin >> choose;





	} while (choose == true);

}