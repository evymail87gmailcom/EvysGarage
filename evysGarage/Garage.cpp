#include"GarageHeader.h"
#include<algorithm>
#include <iostream>
using namespace std;


//Function to define vehicles
void Garage::addVehicleAttributes() {
	cout << "\n" << endl;
	cout << "\t\t\t\t\t\t\tAdd Vehicle" << endl;
	cout << "\t\t\t\t\tChoose the type of vehicle you would like to add: " << endl;
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
	cout << "\t\t\t\t*\tPress 1. for Bicycle:\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tPress 2. for Motorcycle:\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tPress 3. for Car:\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tPress 4. for Truck:\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tPress 5. for Bus:\t\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tPress 0. to exit the menu\t\t\t     *" << endl;
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
	cin >> anyVehicle;

	system("cls");
	
	switch (anyVehicle)
	{
	case 1: {
		myVehicle = new Bicycle();
		cout << "\n" << endl;
		cout << "\t\t\t\t\t\t\tAdding a Bike! " << endl;
		cout << "\t\t\t\t--------------------------------------------------------------" << endl;
		myVehicle->addVehicleAttributes();
		bicycleCounter++;
		break;
	}
	case 2: {
		myVehicle = new MotorCycle();
		cout << "\n" << endl;
		cout << "\t\t\t\t\t\t\tAdding a Motorbike! " << endl;
		cout << "\t\t\t\t--------------------------------------------------------------" << endl;
		myVehicle->addVehicleAttributes();
		motorCycleCounter++;
		break;
	}
	case 3: {
		myVehicle = new Car();
		cout << "\n" << endl;
		cout << "\t\t\t\t\t\t\tAdding a Car! " << endl;
		cout << "\t\t\t\t--------------------------------------------------------------" << endl;
		myVehicle->addVehicleAttributes();
		carCounter++;
		break;
	}
	case 4: {
		myVehicle = new Truck();
		cout << "\n" << endl;
		cout << "\t\t\t\t\t\t\tAdding a Truck! " << endl;
		cout << "\t\t\t\t--------------------------------------------------------------" << endl;
		myVehicle->addVehicleAttributes();
		truckCounter++;
		break;
	}
	case 5: {
		myVehicle = new Bus();
		cout << "\n" << endl;
		cout << "\t\t\t\t\t\t\tAdding a Bus! " << endl;
		cout << "\t\t\t\t--------------------------------------------------------------" << endl;
		myVehicle->addVehicleAttributes();
		busCounter++;
		
	}
	default:
		break;
	}
};

//Default-values for demonstration
void Garage::addDefaultGarage() {

	myVehicle = new Bicycle("Monark", "Black", 5, "Summer", "MTB", "Yes");
	myGarage.push_back(myVehicle);
	myVehicle = new Bicycle("Sjosala", "Red", 3, "Winter", "City", "No");
	myGarage.push_back(myVehicle);
	myVehicle = new MotorCycle("Red", "Yamaha", "Terrain", 449, "YMA203", "Electric");
	myGarage.push_back(myVehicle);
	myVehicle = new MotorCycle("Midnight Blue", "Harley Davidsson", "Cruiser", 225, "HDS504", "Diesel");
	myGarage.push_back(myVehicle);
	myVehicle = new Car("Volvo", "GKG323", "Blue", "Auto", "AYR", "E85", "SolarPanel");
	myGarage.push_back(myVehicle);
	myVehicle = new Car("Peugot", "LEF112", "Green", "Manual", "Summer", "Electric", "Cab");
	myGarage.push_back(myVehicle);
	myVehicle = new Truck("Scania", "ADA872", "White", "4x4", 4);
	myGarage.push_back(myVehicle);
	myVehicle = new Truck("MAN", "ASK789", "White", "8x4", 8);
	myGarage.push_back(myVehicle);
	myVehicle = new Bus("Iveco", "Pink", 63, "KGS987");
	myGarage.push_back(myVehicle);
	myVehicle = new Bus("Volvo", "Yellow", 87, "ORF258");
	myGarage.push_back(myVehicle);
	bicycleCounter = 2;
	motorCycleCounter = 2;
	carCounter = 2;
	truckCounter = 2;
	busCounter = 2;
	nameOfGarage = "DefaultGarage";
	numberOfVehicles = 10;
	

}

//Returns the name of the garage
string Garage::getNameOfGarage() {
	return nameOfGarage;
}
int Garage::getNumberOfSpots() {
	return numberOfVehicles;
}
//returns the size of the garage
int Garage::getSizeOfGarage() {
	return myGarage.size();
}

//Adds a vehicle to the garage
void Garage::addVehicle() {
	myGarage.push_back(myVehicle);
}

//Prints every element of the garage
void Garage::listVehicles() {
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\tListing of Vehicles" << endl;
	printGarageNameAndSpots(numberOfVehicles);
	for (int i = 0; i < myGarage.size(); i++)
	{
		myGarage[i]->printVehicleAttributes();
	}
	cout << "\t\t\t\t";
	system("pause");
	system("cls");
}

//Searchfunction to find a specific registrationnumber in the garage
void Garage::searchRegistrationNumber() {
	printGarageNameAndSpots(numberOfVehicles);
	cout << "Enter the regnr to search for: " << endl;
	bool foundVehicle = 0;
	string input;
	cin >> input;

	for (auto i = 0; i != myGarage.size(); i++)
	{
		string regNr = myGarage[i]->getReg();
		if (regNr == input) {
			cout << "Found vehicle " << regNr << " at parkingspot nr: " << i + 1 << endl;
			myGarage[i]->printVehicleAttributes();
			/*Here a light could be connected at each parkingspot , and lights up when found at the corresponding elementposition*/
			foundVehicle = true;
		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundVehicle == false) {
		cout << "No vehicle with the selected registration was found" << endl;
	}

}

//Searchfunction to find a specific color in the garage
void Garage::searchColor() {
	printGarageNameAndSpots(numberOfVehicles);
	cout << "Enter the color to search for: " << endl;
	bool foundVehicle = 0;
	string input;
	cin >> input;

	for (auto i = 0; i != myGarage.size(); i++)
	{
		string color = myGarage[i]->getColor();
		if (color == input) {
			cout << "Found a " << color << " vehicle at parkingspot nr: " << i + 1 << endl;
			myGarage[i]->printVehicleAttributes();
			/*Here a light could be connected at each parkingspot , and lights up when found at the corresponding elementposition*/
			foundVehicle = true;
		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundVehicle == false) {
		cout << "No vehicle with the selected color was found" << endl;
	}

}

//Searchfunction to find a type of vehicle in the garage
void Garage::searchVehicleType() {
	printGarageNameAndSpots(numberOfVehicles);
	cout << "Enter the vehicletype to search for: " << endl;
	bool foundVehicle = 0;
	string input;
	cin >> input;

	for (auto i = 0; i != myGarage.size(); i++)
	{
		string vehicleType = myGarage[i]->getTypeofVehicle();
		if (vehicleType == input) {
			cout << "Found a " << vehicleType << " match at parkingspot nr: " << i + 1 << endl;
			myGarage[i]->printVehicleAttributes();
			/*Here a light could be connected at each parkingspot , and lights up when found at the corresponding elementposition*/
			foundVehicle = true;
			continue;
		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundVehicle == false) {
		cout << "No vehicle with the selected vehicletype was found" << endl;
	}

}

//Prints every type of vehicle and how many of them there are in the garage
void Garage::listTypeOfVehicles() {
	cout << "--------------------------------------------------------------" << endl;
	cout << "Name of garage" << nameOfGarage << endl;
	cout << "Type of vehicle:\t" << "Number of vehicles:\t" << endl;
	cout << "Bicycles:\t\t" << bicycleCounter << endl;
	cout << "Cars:\t\t\t" << carCounter << endl;
	cout << "Trucks:\t\t\t" << truckCounter << endl;
	cout << "Motorcycles:\t\t" << motorCycleCounter << endl;
	cout << "Bus:\t\t\t" << busCounter << endl;
	cout << "--------------------------------------------------------------" << endl;
}

//Prints the name of the garage
void Garage::printGarageNameAndSpots(int numberofSpots) {
	
	cout << "\t\t\t\tName of garage:\t " << nameOfGarage << endl;
	cout << "\t\t\t\tNumber of parkingspots: " << numberofSpots << endl;
	

}



//Submenu for removevehicle main-choice
void Garage::removeVehicle() {
	printGarageNameAndSpots(numberOfVehicles);
	cout << "1 to remove a specific vehicle by entering RegNumber" << endl;
	cout << "2 to remove the last entry" << endl;
	cout << "0 to exit the menu" << endl;
	int input;
	cin >> input;
	system("cls");
	switch (input)
	{
	case 1: {
		printGarageNameAndSpots(numberOfVehicles);
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
				myGarage[i]->printVehicleAttributes();
				foundVehicle = true;
				//Extra safety
				cout << "Are you sure you want to remove vehicle from garage? Yes = 1/No = 0" << endl;
				cin >> choice;
				if (choice == 1) {
					cout <<"Number of vehicles before removal: "<< myGarage.size()<<endl;
					delete myGarage[i];
					myGarage.erase(remove(myGarage.begin(), myGarage.end(), myGarage[i]));
					cout << "Number of vehicles after removal: "<<myGarage.size()<<" "<<endl;
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

//Submenu for handling the garage
void Garage::editGarage() {
	int editMenuChoice;
	
	do
	{
		cout << "\n" << endl;
		cout << "\t\t\t\t\t\t\tEditMenu" << endl;
		cout << "\t\t\t\t" <<"GarageName: "<<getNameOfGarage() << endl;
		cout<< "\t\t\t\t"<<"Number of parkingspots: "<<getNumberOfSpots()<<endl;
		cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
		cout << "\t\t\t\t*\tPress 1. to add Vehicles to your garage\t\t\t*" << endl;
		cout << "\t\t\t\t*\tPress 2. to see a list of the Vehicles\t\t\t*" << endl;
		cout << "\t\t\t\t*\tPress 3. to remove Vehicles from the garage\t\t*" << endl;
		cout << "\t\t\t\t*\tPress 4. to search Vehicles to your garage\t\t*" << endl;
		cout << "\t\t\t\t*\tPress 0. to exit the editmenu\t\t\t\t*" << endl;
		cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
		cin >> editMenuChoice;
		system("cls");

		switch (editMenuChoice)
		{
		case 1: {
			for (int i = 0; i < numberOfVehicles; i++)
			{
				addVehicleAttributes();
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
	} while (editMenuChoice != 0);
}

//Searchmenu
void Garage::searchMenu() {
	
	int menuChoice = 0;
	bool choose;
	do {
		printGarageNameAndSpots(numberOfVehicles);
		cout << "Press 1 to Search for registrationnumbers in the garage" << endl;
		cout << "Press 2 to Search for a specific color in the garage" << endl;
		cout << "Press 3 to Search for a type of vehicle in the garage" << endl;
		cout << "Press 0 to exit to mainmenu" << endl;

		cin >> menuChoice;
		system("cls");

		switch (menuChoice)
		{
		case 1: {
			do {
				searchRegistrationNumber();
				cout << "Do you wish to do another search, press 1 Or to get back to the searchmenu press 0" << endl;
				cin >> choose;
				system("cls");

			} while (choose == true);
			break;
		}
		case 2: {
			do {
				searchColor();
				cout << "Do you wish to do another search, press 1 Or to get back to the searchmenu press 0" << endl;
				cin >> choose;
				system("cls");

			} while (choose == true);
			break;
		}
		case 3: {
			do {
				searchVehicleType();
				cout << "Do you wish to do another search, press 1 Or to get back to the searchmenu press 0" << endl;
				cin >> choose;
				system("cls");
			} while (choose == true);
			break;
		}
		default:
			break;
		}
		system("cls");
	} while (menuChoice != 0);
}

void Garage::addGarage() {

	
	//Gives the garage a specific attribute-name
	cout << "\n" << endl;
	cout << "\t\t\t\t\t\t\tAdding Garage!" << endl;
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
	cout << "\t\t\t\t*\tWhat would you like to call your garage?\t     *" << endl;
	cout << "\t\t\t\t\t";
	cin >> nameOfGarage;
	
	//Creation of garage-object per parameterized constructor
	Garage* myNewGarage = new Garage(nameOfGarage);
	//How many Vehicles we would like to add to the garage
	do {
		cout << "\t\t\t\t*\tEnter the number of spaces you want in your garage,  *\n\t\t\t\t*\tMAXIMUM 100 VEHICLES!:\t\t\t\t     *" << endl;
		cout << "\t\t\t\t\t";
		cin >> numberOfVehicles;
		cout << "\t\t\t\t*\t\t\t\t\t\t\t     *" << endl;
		cout << "\t\t\t\t--------------------------------------------------------------" << endl;
		if (numberOfVehicles > 100) {
			cout << "\t\t\t\t*\tExceeded maximum number of vehicles, please try again*" << endl;
		}

	} while (numberOfVehicles > 100);
	cout << "\t\t\t\t\t";
	system("pause");
	system("cls");
	editGarage();
	
}


void Garage::startPogram() {
	
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
			addGarage();
			myMainGarageVector.push_back(myMainGarage);
			break;
		}
		 //Creates a garage with 10 pre-made vehicles
		case 2: {
			addDefaultGarage();
			editGarage();
			myMainGarageVector.push_back(myMainGarage);
			break;
		}
		case 3: {
			listTypeOfVehicles();
			cout << "Number of garages in the company " << myMainGarageVector.size() << endl;
		}
		default:
			break;
		}

	} while (chooseGarage != 0);
	
}

//Returns the vector
vector<Vehicle*> Garage::getObject() {
	printGarageNameAndSpots(numberOfVehicles);
	return myGarage;
};
