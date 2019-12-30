#include"GarageHeader.h"
#include<algorithm>
#include <iostream>
using namespace std;

//------------------------------------------------------------------------------------------------------------------------------------
//Här finns funktionen för hur fordonet skall läggas till
void Garage::addVehicleAttributes() {
	cout << "--------------------------------------------------------------" << endl;
	cout << "Choose the type of vehicle you would like to add: " << endl;
	cout << "1 for Bicycle: " << endl;
	cout << "2 for Motorcycle: " << endl;
	cout << "3 for Car: " << endl;
	cout << "4 for Truck: " << endl;
	cout << "5 for Bus: " << endl;
	cin >> anyVehicle;
	cout << "--------------------------------------------------------------" << endl;
	switch (anyVehicle)
	{
	case 1: {
		myVehicle = new Bicycle();
		cout << "--------------------------------------------------------------" << endl;
		cout << "One Bike it is! " << endl;
		myVehicle->addVehicleAttributes();
		bicycleCounter++;
		break;
	}
	case 2: {
		myVehicle = new MotorCycle();
		cout << "One Motorbike it is! " << endl;
		myVehicle->addVehicleAttributes();
		motorCycleCounter++;
		break;
	}
	case 3: {
		myVehicle = new Car();
		cout << "One Car it is! " << endl;
		myVehicle->addVehicleAttributes();
		carCounter++;
		break;
	}
	case 4: {
		myVehicle = new Truck();
		cout << "One Truck it is! " << endl;
		myVehicle->addVehicleAttributes();
		truckCounter++;
		break;
	}
	case 5: {
		myVehicle = new Bus();
		cout << "One Bus it is! " << endl;
		myVehicle->addVehicleAttributes();
		busCounter++;
	}
	default:
		break;
	}
};
int Garage::addGarage() {
	cout << "--------------------------------------------------------------" << endl;
	//Gives the garage a specific attribute-name
	cout << "What would you like to call your garage?" << endl;
	cin >> nameOfGarage;
	//Creation of garage-object per parameterized constructor
	Garage* myNewGarage = new Garage(nameOfGarage);
	//How many Vehicles we would like to add to the garage
	cout << "Enter the number of spaces you want in your garage: " << endl;
	cin >> numberOfVehicles;
	return numberOfVehicles;
	cout << "--------------------------------------------------------------" << endl;
	system("cls");

	printGarage(numberOfVehicles);
	editGarage();

}
//------------------------------------------------------------------------------------------------------------------------------------
void Garage::addDefaultGarage() {
	myVehicle = new Car("Blue", "Volvo", 5, "AYR", "Solar");
	myGarage.push_back(myVehicle);
	myVehicle = new Car("Green", "Peugot", 5, "Summer", "Cab");
	myGarage.push_back(myVehicle);
	myVehicle = new Bicycle("Black", "Monark", 5, "Summer", "MTB", "Yes");
	myGarage.push_back(myVehicle);
	myVehicle = new Bicycle("Red", "Sjosala", 3, "Winter", "City", "No");
	myGarage.push_back(myVehicle);
	myVehicle = new Truck("White", "Scania", 7, "Summer", "4x4");
	myGarage.push_back(myVehicle);
	myVehicle = new Truck("White", "MAN", 5, "Summer", "8x4");
	myGarage.push_back(myVehicle);
	myVehicle = new MotorCycle("Red", "Yamaha", 5, "Terrain", 449, "YMA203");
	myGarage.push_back(myVehicle);
	myVehicle = new MotorCycle("Midnight Blue", "Harley Davidsson", 3, "Cruiser", 225, "HDS504");
	myGarage.push_back(myVehicle);
	myVehicle = new Bus("Pink", "Iveco", 5, "AYR", 63, "KGS987");
	myGarage.push_back(myVehicle);
	myVehicle = new Bus("Yellow", "Volvo", 5, "Winter", 87, "ORF258");
	myGarage.push_back(myVehicle);

	nameOfGarage = "defaultGarage";
	numberOfVehicles = 10;
	printGarage(numberOfVehicles);
}
//------------------------------------------------------------------------------------------------------------------------------------
//Returns the name of the garage
string Garage::getNameOfGarage() {
	return nameOfGarage;
}
//------------------------------------------------------------------------------------------------------------------------------------
int Garage::getSizeOfGarage() {
	return myGarage.size();
}
//------------------------------------------------------------------------------------------------------------------------------------
//Adds a vehicle to the garage. WORKS!
void Garage::addVehicle() {
	myGarage.push_back(myVehicle);
}
//------------------------------------------------------------------------------------------------------------------------------------
//Prints every element of the garage, WORKS!!!
void Garage::listVehicles() {
	for (int i = 0; i < myGarage.size(); i++)
	{
		myGarage[i]->printVehicleAttributes();
	}
	cout << "I printed a garage!" << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------
//Searchfunction to find a specific registrationnumber in the garage, Works!!
void Garage::searchRegistrationNumber() {

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

			foundVehicle = true;
		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundVehicle == false) {
		cout << "No vehicle with the selected registration was found" << endl;
	}

}
//------------------------------------------------------------------------------------------------------------------------------------
//Searchfunction to find a specific color in the garage, Works!!
void Garage::searchColor() {

	cout << "Enter the color to search for: " << endl;
	bool foundVehicle = 0;
	string input;
	cin >> input;

	for (auto i = 0; i != myGarage.size(); i++)
	{
		string color = myGarage[i]->getColor();
		if (color == input) {
			cout << "Found a " << color << " vehicle at parkingspot nr: " << i + 1 << endl;
			/*Here a light could be connected at each parkingspot , and lights up when found at the corresponding elementposition*/
			//returns the elementslot for the found object

			foundVehicle = true;

		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundVehicle == false) {
		cout << "No vehicle with the selected registration was found" << endl;
	}

}
//------------------------------------------------------------------------------------------------------------------------------------
//Searchfunction to find a type of vehicle in the garage, Works!!
void Garage::searchVehicleType() {

	cout << "Enter the vehicletype to search for: " << endl;
	bool foundVehicle = 0;
	string input;
	cin >> input;

	for (auto i = 0; i != myGarage.size(); i++)
	{
		string vehicleType = myGarage[i]->getTypeofVehicle();
		if (vehicleType == input) {
			cout << "Found a " << vehicleType << " match at parkingspot nr: " << i + 1 << endl;
			/*Here a light could be connected at each parkingspot , and lights up when found at the corresponding elementposition*/
			//returns the elementslot for the found object

			foundVehicle = true;
			continue;
		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundVehicle == false) {
		cout << "No vehicle with the selected vehicletype was found" << endl;
	}

}
//------------------------------------------------------------------------------------------------------------------------------------
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
//------------------------------------------------------------------------------------------------------------------------------------
//Prints the name of the garage
void Garage::printGarage(int numberofSpots) {

	cout << "Name of garage: " << nameOfGarage << ": " << endl;
	cout << "number of parkingspots: " << numberofSpots << endl;
}


//------------------------------------------------------------------------------------------------------------------------------------
//Submenu for removevehicle main-choice
void Garage::removeVehicle() {
	//User gets to choose 
	cout << "1 to remove a specific vehicle by entering RegNumber" << endl;
	cout << "2 to remove the last entry" << endl;
	int input;
	cin >> input;

	switch (input)
	{
	case 1: {
		//Removes the element based on searched reg.nr
		cout << "Enter the regnr to search for: " << endl;
		bool foundVehicle = 0;
		bool choice;
		string input;
		cin >> input;

		for (int i = 0; i != myGarage.size(); i++)
		{
			string regNr = myGarage[i]->getReg();
			if (regNr == input) {
				cout << "Found vehicle at element: " << i << endl;
				/*Here a light could be connected at each parkingspot , and lights up when found at the corresponding elementposition*/
				//returns the elementslot for the found object

				foundVehicle = true;
				//Extra safety
				cout << "Are you sure you want to remove vehicle from garage?" << endl;
				cin >> choice;
				if (choice == 1) {
					myGarage.erase(remove(myGarage.begin(), myGarage.end(), myGarage[i]));

				}
			}
		}

		//Exceptionhandling if other input than existing vehicle is given
		if (foundVehicle == false) {
			cout << "No vehicle with the selected registration was found" << endl;
		}
		break;
	}

	case 2: {
		//Removes the last element of the vector
		myGarage.pop_back();
	}

	default:
		break;
	}
}
//------------------------------------------------------------------------------------------------------------------------------------
//Submenu for handling the garage
void Garage::editGarage() {
	int editMenuChoice = 0;
	bool editGaragechoose;
	do {

		cout << "1 to add Vehicles to your garage" << endl;
		cout << "2 to see a list of the Vehicles." << endl;
		cout << "3 to remove Vehicles from the garage" << endl;
		cout << "4 to search Vehicles to your garage" << endl;
		cin >> editMenuChoice;
		switch (editMenuChoice)
		{
		case 1: {
			for (int i = 0; i < numberOfVehicles; i++)
			{

				myVehicle->addVehicleAttributes();
				addVehicle();
			}
			break;
		}
		case 2: {
			listVehicles();
			break;
		}
		case 3: {

			removeVehicle();
			break;
		}
		case 4: {

			searchMenu();
			break;
		}
		default:
			break;
		}
		cout << "Would you like to edit your garage? yes=1/no=0" << endl;
		cin >> editGaragechoose;
	} while (editGaragechoose == true);
}
//------------------------------------------------------------------------------------------------------------------------------------
//Searchmenu
void Garage::searchMenu() {
	
	int menuChoice = 0;
	bool choose;
	do {
		cout << "Press 1 to Search for registrationnumbers in the garage" << endl;
		cout << "Press 2 to Search for a specific color in the garage" << endl;
		cout << "Press 3 to Search for number of wheels in the garage" << endl;
		cout << "Press 4 to Search for minimum number of seats in the garage" << endl;
		cout << "Press 5 to Searchfor a type of vehicle in the garage" << endl;
		cin >> menuChoice;

		switch (menuChoice)
		{
		case 1: {
			do {

				searchRegistrationNumber();
				cout << "Do you wish to do another search, press 1 Or to get back to the searchmenu press 0" << endl;
				cin >> choose;
			} while (choose == true);
			break;
		}
		case 2: {
			do {
				searchColor();
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
				searchVehicleType();
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
	} while (choose == true);

}