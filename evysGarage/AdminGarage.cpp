#include "AdminGarage.h"
#include <iostream>

using namespace std;




void AdminGarage::createGarage() {
	int chooseGarage = 0;
	do {
		cout << "\n" << endl;
		cout << "\t\t\t\t\t\tWelcome to the AdminTool!" << endl;
		cout << "\t\t\t\t--------------------------------------------------------------" << endl;
		cout << "\t\t\t\tPress 1 to manually add a garage" << endl;
		cout << "\t\t\t\tPress 2 to use a default garage" << endl;
		//cout << "Press 3 to list vehicletypes" << endl;
		cout << "\t\t\t\tPress 0 to exit program" << endl;
		cout << "\t\t\t\t--------------------------------------------------------------" << endl;
		cin >> chooseGarage;
		system("cls");

		switch (chooseGarage)
		{
			//Manually adds a Garage
		case 1: {
			mainGarage = new Garage();
			mainGarage->addGarage();
			addGarageToCollection();
			break;
		}
			  //Creates a garage with 10 pre-made vehicles
		case 2: {
			mainGarage = new Garage();
			mainGarage->addDefaultGarage();
			mainGarage->editGarage();
			addGarageToCollection();
			break;
		}
	
		default:
			break;
		}

	} while (chooseGarage != 0);
}



void AdminGarage::addGarageToCollection() {
	garageCollection.push_back(mainGarage);
};

void AdminGarage::listGarageAttributes() {
	for (int i = 0; i < garageCollection.size(); i++)
	{	
		mainGarage->printGarageNameAndSpots(mainGarage->getSizeOfGarage());
	}
}

void AdminGarage::searchGarage() {
	cout << "Enter the GarageName to search for: " << endl;
	bool foundGarage = 0;
	string input;
	cin >> input;

	for (auto i = 0; i != garageCollection.size(); i++)
	{
		string garageName = garageCollection[i]->getNameOfGarage();
		if (garageName == input) {
			cout << "\t\t\t\tFound Garage " << garageName << " at row nr: " << i + 1 << endl;
			cout << "\t\t\t\t--------------------------------------------------------------" << endl;
			cout << "\t\t\t\tGaragenumber:\t " << i << endl;
			cout << "\t\t\t\tName of garage\t " << garageCollection[i]->getNameOfGarage() << endl;
			cout << "\t\t\t\tSize of garage\t " << garageCollection[i]->getNumberOfSpots() << endl;
			cout << "\t\t\t\tNumber of vehicles in the garage:\t " << garageCollection.size() << endl;
			cout << "\t\t\t\t--------------------------------------------------------------" << endl;
			cout << "\n" << endl;
			
			foundGarage = true;
		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundGarage == false) {
		cout << "No garage with the corresponding name was found" << endl;
	}
}
void AdminGarage::removeGarage() {
	cout << "1 to remove a specific garage by entering garagename" << endl;
	cout << "2 to remove the last entry" << endl;
	cout << "0 to exit the menu" << endl;
	int input;
	cin >> input;
	system("cls");
	switch (input)
	{
	case 1: {
		
		//Removes the element based on searched reg.nr
		cout << "Enter the  to search for: " << endl;
		bool foundGarage = 0;
		bool choice;
		string input;
		cin >> input;

		for (int i = 0; i != garageCollection.size(); i++)
		{
			string garageName = garageCollection[i]->getNameOfGarage();
			if (garageName == input) {
				cout << "Found Garage at row: " << i+1 << endl;
				
				cout << "Name of garage\t " << garageCollection[i]->getNameOfGarage() << endl;
				cout << "Size of garage\t " << garageCollection[i]->getNumberOfSpots() << endl;
				foundGarage = true;
				//Extra safety
				cout << "Are you sure you want to remove garage from collection? Yes = 1/No = 0" << endl;
				cin >> choice;
				if (choice == 1) {
					cout << "Number of garages before removal: " << garageCollection.size() << endl;
					delete garageCollection[i];
					garageCollection.erase(remove(garageCollection.begin(), garageCollection.end(), garageCollection[i]));
					cout << "Number of vehicles after removal: " << garageCollection.size() << " " << endl;
				}
			}
		}

		//Exceptionhandling if other input than existing vehicle is given
		if (foundGarage == false) {
			cout << "No garage with the corresponding name was found" << endl;
		}
		break;
	}

	case 2: {
		//Removes the last element of the vector
		garageCollection.pop_back();
	}

	default:
		break;
	}

}




void AdminGarage::listGarage() {
	for (int i = 0; i < garageCollection.size(); i++)
	{
		cout << "\t\t\t\t--------------------------------------------------------------" << endl;
		cout <<"\t\t\t\t*\t\tGaragenumber:\t "<< i << endl;
		cout << "\t\t\t\t*\t\tName of garage\t "<<garageCollection[i]->getNameOfGarage() << endl;
		cout<<"\t\t\t\t*\t\tSize of garage\t "<<garageCollection[i]->getNumberOfSpots()<<endl;
		cout << "\t\t\t\t*\t\tNumber of vehicles in the garage:\t " << garageCollection.size() << endl;
		cout << "\t\t\t\t--------------------------------------------------------------" << endl;
		cout << "\n" << endl;
	}

};
void AdminGarage::accessGarage() {
	cout << "Enter the GarageName to access: " << endl;
	bool foundGarage = 0;
	string input;
	cin >> input;

	for (auto i = 0; i != garageCollection.size(); i++)
	{
		string garageName = garageCollection[i]->getNameOfGarage();
		if (garageName == input) {
			cout << "\t\t\t\tFound Garage " << garageName << " at row nr: " << i + 1 << endl;
			cout << "\t\t\t\t--------------------------------------------------------------" << endl;
			cout << "\t\t\t\tGaragenumber:\t " << i << endl;
			cout << "\t\t\t\tName of garage\t " << garageCollection[i]->getNameOfGarage() << endl;
			cout << "\t\t\t\tSize of garage\t " << garageCollection[i]->getNumberOfSpots() << endl;
			cout << "\t\t\t\tNumber of vehicles in the garage:\t " << garageCollection.size() << endl;
			cout << "\t\t\t\t--------------------------------------------------------------" << endl;
			cout << "\n" << endl;
			garageCollection[i]->editGarage();


			foundGarage = true;
		}
	}
	//Exceptionhandling if other input than existing vehicle is given
	if (foundGarage == false) {
		cout << "No garage with the corresponding name was found" << endl;
	}
}