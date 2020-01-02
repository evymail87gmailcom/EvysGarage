#include<iostream>
#include<string>
#include <vector>
#include"GarageHeader.h"
#include"Vehicle.h"
#include "AdminGarage.h"
using namespace std;

int main() {
	

	
	
	
	AdminGarage start;
	int choice=0;
	cout << "\n" << endl;
	
	cout << "\t\t\t\t\t\tWelcome to the AdminTool!" << endl;
	

	do{
		cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
		cout << "\t\t\t\t*\t\tPress 1. to create a garage\t\t\t*" << endl;
		cout << "\t\t\t\t*\t\tPress 2. to list garages\t\t\t*" << endl;
		cout << "\t\t\t\t*\t\tPress 3. to access garages\t\t\t*" << endl;
		cout << "\t\t\t\t*\t\tPress 4. to search for a garage\t\t\t*" << endl;
		cout << "\t\t\t\t*\t\tPress 5. to delete a garage\t\t\t*" << endl;
		cout << "\t\t\t\t*\t\tPress 0. to exit to mainmenu\t\t\t*" << endl;
		cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
		cin >> choice;
		system("cls");

		switch (choice)
		{
		case 1: {
			start.createGarage();
			break;
		}
		case 2: {
			start.listGarage();
			break;
		}
		case 3: {
			start.accessGarage();
			break;
		}
		case 4: {
			start.searchGarage();
			break;
		}
		case 5: {
			start.removeGarage();
		}
		default:
			break;
		}
	
	
		cout << "\n" << endl;
		cout << "\t\t\t\t\t\t\tMainMenu" << endl;

	} while (choice != 0);

	cout << "Welcome back!" << endl;
	return 0;
}


