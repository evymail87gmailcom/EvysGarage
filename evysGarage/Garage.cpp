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
	cout << "\t\t\t\t";
	cin >> anyVehicle;

	system("cls");
	if(anyVehicle!=0){
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
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\tSearch Vehicle By RegNr" << endl;
	cout << "\n";
	printGarageNameAndSpots(numberOfVehicles);
	cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
	//Removes the element based on searched reg.nr
	cout << "\t\t\t\tEnter the regnr to search for: ";
	bool foundVehicle = 0;
	string input;
	cin >> input;

	for (auto i = 0; i != myGarage.size(); i++)
	{
		string regNr = myGarage[i]->getReg();
		if (regNr == input) {
			cout << "\t\t\t\tFound vehicle " << regNr << " at parkingspot nr: " << i + 1 << endl;
			myGarage[i]->printVehicleAttributes();
			/*Here a light could be connected at each parkingspot , and lights up when found at the corresponding elementposition*/
			foundVehicle = true;
		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundVehicle == false) {
		cout << "\t\t\t\tNo vehicle with the selected registration was found" << endl;
		cout << "\t\t\t\t";
		system("pause");
		system("cls");
		
	}
	
}

//Searchfunction to find a specific color in the garage
void Garage::searchColor() {
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\tSearch Vehicle By Color" << endl;
	cout << "\n";
	printGarageNameAndSpots(numberOfVehicles);
	cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
	cout << "\t\t\t\tEnter the color to search for: ";
	bool foundVehicle = 0;
	string input;
	cin >> input;

	for (auto i = 0; i != myGarage.size(); i++)
	{
		string color = myGarage[i]->getColor();
		if (color == input) {
			cout << "\t\t\t\tFound a " << color << " vehicle at parkingspot nr: " << i + 1 << endl;
			myGarage[i]->printVehicleAttributes();
			/*Here a light could be connected at each parkingspot , and lights up when found at the corresponding elementposition*/
			foundVehicle = true;
		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundVehicle == false) {
		cout << "\t\t\t\tNo vehicle with the selected color was found" << endl;
		cout << "\t\t\t\t";
		system("pause");
		system("cls");
	}

}

//Searchfunction to find a type of vehicle in the garage
void Garage::searchVehicleType() {
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\tSearch Vehicle By Type e.g. Car, Bicycle..." << endl;
	cout << "\n";
	printGarageNameAndSpots(numberOfVehicles);
	cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
	cout << "\t\t\t\tEnter the vehicletype to search for: ";
	bool foundVehicle = 0;
	string input;
	cin >> input;

	for (auto i = 0; i != myGarage.size(); i++)
	{
		string vehicleType = myGarage[i]->getTypeofVehicle();
		if (vehicleType == input) {
			cout << "\t\t\t\tFound a " << vehicleType << " match at parkingspot nr: " << i + 1 << endl;
			myGarage[i]->printVehicleAttributes();
			/*Here a light could be connected at each parkingspot , and lights up when found at the corresponding elementposition*/
			foundVehicle = true;
			continue;
		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundVehicle == false) {
		cout << "\t\t\t\tNo vehicle with the selected vehicletype was found" << endl;
		cout << "\t\t\t\t";
		system("pause");
		system("cls");
	}

}

//Prints every type of vehicle and how many of them there are in the garage
void Garage::listTypeOfVehicles() {
	cout << "\n" << endl;
	cout << "\t\t\t\t\t\t\tList of VehicleTypes" << endl;
	cout << "\t\t\t\t" << "GarageName: " << getNameOfGarage() << endl;
	cout << "\t\t\t\t" << "Number of parkingspots: " << getNumberOfSpots() << endl;
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
	cout << "\t\t\t\t*\tType of vehicle:\t" << "Number of vehicles:\t" << "     *" << endl;
	cout << "\t\t\t\t*\tBicycles:\t\t" << bicycleCounter << "\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tCars:\t\t\t" << carCounter << "\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tTrucks:\t\t\t" << truckCounter << "\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tMotorcycles:\t\t" << motorCycleCounter << "\t\t\t     *" << endl;
	cout << "\t\t\t\t*\tBus:\t\t\t" << busCounter << "\t\t\t     *" << endl;
	cout << "\t\t\t\t--------------------------------------------------------------" << endl;
	cout << "\t\t\t\t";
	system("pause");
	system("clear");
}

//Prints the name and number of parkingspots in the garage
void Garage::printGarageNameAndSpots(int numberofSpots) {
	
	cout << "\t\t\t\tName of garage:\t " << nameOfGarage << endl;
	cout << "\t\t\t\tNumber of parkingspots: " << numberofSpots << endl;
	

}

void Garage::removeVehicle() {
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\tRemove Vehicle" << endl;
	cout << "\n";
	printGarageNameAndSpots(numberOfVehicles);
	cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
	cout << "\t\t\t\t*\tPress 1. to remove a vehicle by RegNumber\t\t*" << endl;
	cout << "\t\t\t\t*\tPress 2. to remove the last entry\t\t\t*" << endl;
	cout << "\t\t\t\t*\tPress 0. to exit the menu\t\t\t\t*" << endl;
	cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
	int input;
	cout << "\t\t\t\t";
	cin >> input;
	system("cls");
	switch (input)
	{
	case 1: {
		cout << "\n";
		cout << "\n";
		cout << "\t\t\t\t\t\t\tRemove Vehicle" << endl;
		cout << "\n";
		printGarageNameAndSpots(numberOfVehicles);
		cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
		//Removes the element based on searched reg.nr
		cout << "\t\t\t\tEnter the regnr to search for: ";
		bool foundVehicle = 0;
		bool choice;
		string input;
		cout << "\t\t\t\t";
		cin >> input;

		for (int i = 0; i != myGarage.size(); i++)
		{
			string regNr = myGarage[i]->getReg();
			if (regNr == input) {
				cout << "\t\t\t\tFound vehicle at element: " << i << endl;
				/*Here a light could be connected at each parkingspot , and lights up when found at the corresponding elementposition*/
				myGarage[i]->printVehicleAttributes();
				foundVehicle = true;
				//Extra safety
				cout << "\t\t\t\tAre you sure you want to remove vehicle from garage? Yes = 1/No = 0" << endl;
				cin >> choice;
				if (choice == 1) {
					cout <<"\t\t\t\tNumber of vehicles before removal: "<< myGarage.size()<<endl;
					delete myGarage[i];
					myGarage.erase(remove(myGarage.begin(), myGarage.end(), myGarage[i]));
					cout << "\t\t\t\tNumber of vehicles after removal: "<<myGarage.size()<<" "<<endl;
				}
			}
		}

		//Exceptionhandling if other input than existing vehicle is given
		if (foundVehicle == false) {
			cout << "\t\t\t\tNo vehicle with the selected registration was found" << endl;
			system("pause");
			system("cls");
			break;
		}
		system("pause");
		system("cls");
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
		cout << "\t\t\t\t*\tPress 5. to list vehicletypes in your garage\t\t*" << endl;
		cout << "\t\t\t\t*\tPress 0. to exit the editmenu\t\t\t\t*" << endl;
		cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
		cout << "\t\t\t\t";
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
		case 5: {
			listTypeOfVehicles();
		}
		default:
			break;
		}
	} while (editMenuChoice != 0);
}

void Garage::searchMenu() {
	
	int menuChoice = 0;
	bool choose;
	do {
		cout << "\n" << endl;
		cout << "\t\t\t\t\t\t\tSearchMenu" << endl;
		printGarageNameAndSpots(numberOfVehicles);
		cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
		cout << "\t\t\t\t*\tPress 1. to Search for registrationnumbers in the garage*" << endl;
		cout << "\t\t\t\t*\tPress 2. to Search for a specific color in the garage\t*" << endl;
		cout << "\t\t\t\t*\tPress 3. to Search for a type of vehicle in the garage\t*" << endl;
		cout << "\t\t\t\t*\tPress 0. to exit to Editmenu\t\t\t\t*" << endl;
		cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
		cout << "\t\t\t\t";
		cin >> menuChoice;
		system("cls");

		switch (menuChoice)
		{
		case 1: {
				searchRegistrationNumber();				
			break;
		}
		case 2: {
				searchColor();
				break;
		}
		case 3: {
				searchVehicleType();	
			break;
		}
		default:
			break;
		}
		cout << "\t\t\t\t";
		system("pause");
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

