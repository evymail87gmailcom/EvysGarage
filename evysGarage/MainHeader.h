#pragma once
#include<iostream>
#include<istream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;



/*Garaget behöver innehålla funktionerna
-Parkera fordon
-Hämta fordon
-Se fordon
-
*/

template < typename T>
std::pair<bool, int > findInVector(const std::vector<T>& vecOfElements, const T& element)
{
	std::pair<bool, int > result;

	// Find given element in vector
	auto it = std::find(vecOfElements.begin(), vecOfElements.end(), element);

	if (it != vecOfElements.end())
	{
		result.second = distance(vecOfElements.begin(), it);
		result.first = true;
	}
	else
	{
		result.first = false;
		result.second = -1;
	}

	return result;
}

class Vehicle {
protected:
	string color;
	string nameOfBrand;
	string typeOfFuel;
	string typeOfWheels;
	string typeOfGearBox;
	string regNr;
	int numberOfwheels;
	int numberOfGears;

public:
	Vehicle() {
		nameOfBrand = "";
		color = "";
		typeOfFuel = "";
		typeOfWheels = "";
		typeOfGearBox = "";
		regNr = "";
		numberOfwheels = 0;
		numberOfGears = 0;
	}
	Vehicle(string colorIn, string brandIn, string fuelIn, string regIn, int numberOfGearsIn, string wheelsIn, string typeOfGearBoxIn, int numberOfWheelsIn) {
		nameOfBrand = brandIn;
		color = colorIn;
		typeOfFuel = fuelIn;
		typeOfWheels = wheelsIn;
		typeOfGearBox = typeOfGearBoxIn;
		regNr = regIn;
		numberOfwheels = numberOfWheelsIn;
		numberOfGears = numberOfGearsIn;

	}
	~Vehicle() {};
	//Dessa återfinns i de ärvande klasserna
	virtual string getReg() = 0;
	virtual void addVehicleAttributes() = 0;
	virtual void printVehicleAttributes() = 0;


};




//Subklass cykel
class Bicycle :public Vehicle {
protected:
	string typeOfBike;
	string electric;

public:

	Bicycle() {

		//Default för basklass
		typeOfFuel = "";
		typeOfGearBox = "";
		regNr = "";
		numberOfwheels = 0;
		//Specifikt för klassen
		nameOfBrand = "";
		color = "";
		typeOfWheels = "";
		numberOfGears = 0;
		typeOfBike = "";
		electric = "yes";
	};
	//Skall ej behövas för att köra programmet men går att använda för att lägga till som kontrollfunktion
	Bicycle(string colorIn, string brandIn, int numberOfGearsIn, string wheelsIn, string typeOfBikeIn, bool electricIn) {
		nameOfBrand = brandIn;
		color = colorIn;
		typeOfWheels = wheelsIn;
		numberOfGears = numberOfGearsIn;
		typeOfBike = typeOfBikeIn;
		electric = electricIn;
	};
	//Adding information to the Bicycle-object
	void addVehicleAttributes() {
		/*cout << "Enter nameOfBrand: " << endl;
		cin >> nameOfBrand;
		cout << "Enter color: " << endl;
		cin >> color;
		cout << "Enter typeOfWheels(Summer/Winter): " << endl;
		cin >> typeOfWheels;
		cout << "Enter numberOfGears: " << endl;
		cin >> numberOfGears;
		cout << "Enter typeOfBike: " << endl;
		cin >> typeOfBike;
		cout << "Enter if it is an electric-bike(yes/no): " << endl;
		cin >> electric;
		*///test
		cout << "Enter regnr: " << endl;
		cin >> regNr;

	};

	void printVehicleAttributes() {
		cout << "\n";
		cout << "Name:\t\t" << nameOfBrand << endl;
		cout << "Color:\t\t" << color << endl;
		cout << "Type of wheels:\t" << typeOfWheels << endl;
		cout << "Number of gears:" << numberOfGears << endl;
		cout << "Type of bike:\t" << typeOfBike << endl;
		cout << "Electric:\t" << electric << endl;
		cout << "RegNr:\t" << regNr << endl;
		cout << "\n";

	};
	string getReg() {
		return regNr;
	}

	~Bicycle() {};
};

/*
//Subklass Motorcykel
class MotorCycle :public Vehicle {
protected:
	int cc;

public:
	MotorCycle() {};
	MotorCycle() {};
	void addVehicleAttributes() {
	}
	void printVehicleAttributes(){
	}
	~MotorCycle() {};
};
//Subklass Bil
class Car :public Vehicle {
protected:

public:
	Car() {};
	Car() {};
	void addVehicleAttributes() {
	}
	void printVehicleAttributes() {
	}
	~Car() {};
};
//Subklass Bus
class Bus :public Vehicle {
protected:
int numberOfSeats;
public:
	Bus() {};
	Bus() {};
	void addVehicleAttributes() {
	}
	void printVehicleAttributes() {
	}
	~Bus() {};
};
//Subklass Lastbil
class Truck :public Vehicle {
protected:

public:
	Truck() {};
	Truck() {};
	void addVehicleAttributes() {
	}
	void printVehicleAttributes() {
	}
	~Truck() {};
};
*/



class Garage {
protected:
	int anyVehicle;
	int numberOfVehicles;
	Vehicle* myVehicle;
	string nameOfGarage;
	vector<Vehicle>::iterator it2;
public:
	int bicycleCounter = 0;
	int carCounter = 0;
	int truckCounter = 0;
	int motorCycleCounter = 0;
	int busCounter = 0;
	vector <Vehicle*>myGarage;
	Garage() {
		anyVehicle = 0;
		numberOfVehicles = 0;
		nameOfGarage = "";

	};
	Garage(string nameOfGarageIn) {
		nameOfGarage = nameOfGarageIn;
	};


	//Här finns funktionen för hur fordonet skall läggas till
	void addVehicleAttributes() {


		cout << "Choose the type of vehicle you would like to add: " << endl;
		cout << "1 for Bicycle: " << endl;
		cout << "2 for Motorcycle: " << endl;
		cout << "3 for Car: " << endl;
		cout << "4 for Truck: " << endl;
		cout << "5 for Bus: " << endl;
		cin >> anyVehicle;
		switch (anyVehicle)
		{
		case 1: {
			myVehicle = new Bicycle();
			cout << "One bike it is! " << endl;
			cout << "Please register your Bicycle: " << endl;
			myVehicle->addVehicleAttributes();
			bicycleCounter++;

			break;
		}
			  /*
			 case 2: {
				 myVehicle = new MotorCycle();
				 cout << "One Motorbike it is! " << endl;
				 cout << "Please register your Motorcycle: " << endl;
				 myVehicle->addVehicleAttributes();
				 motorCycleCounter++;
					   break;
			 }
			 case 3: {
				  myVehicle = new Car();
				 cout << "One car it is! " << endl;
				 cout << "Please register your car: " << endl;
				 myVehicle->addVehicleAttributes();
				 carCounter++;
					   break;
			 }
			  case 4: {
					   myVehicle = new Truck();
						 cout << "One truck it is! " << endl;
				 cout << "Please register your truck: " << endl;
				 myVehicle->addVehicleAttributes();
				 truckCounter++;
					   break;
				   }
					 case5: {
						 myVehicle = new Bus();
							 cout << "One bus it is! " << endl;
				 cout << "Please register your bus: " << endl;
				 myVehicle->addVehicleAttributes();
				 busCounter++;
				   }
				   */
		default:
			break;
		}
	};

	//Adds a vehicle to the garage. WORKS!
	void addVehicle() {
		myGarage.push_back(myVehicle);
		cout << "Pushed back!" << endl;
	}

	//Prints every element of the garage, WORKS!!!
	void listVehicles() {
		for (int i = 0; i < myGarage.size(); i++)
		{
			myGarage[i]->printVehicleAttributes();
		}
		cout << "I printed a garage!" << endl;
	}

	//Searchfunction to find a specific registrationnumber in the garage, Works!!
	int searchVehicle() {

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
				return i;
				foundVehicle = true;
			}
		}
		//Exceptionhandling if other input than existing vehicle is given
		if (foundVehicle == false) {
			cout << "No vehicle with the selected registration was found" << endl;
		}
		return -1;
	}
	//Prints every type of vehicle and how many of them there are in the garage, WORKS! 
	void listTypeOfVehicles() {
		cout << "Type of vehicle:\t" << "Number of vehicles:\t" << endl;
		cout << "Bicycles:\t\t" << bicycleCounter << endl;
		cout << "Cars:\t\t\t" << carCounter << endl;
		cout << "Trucks:\t\t\t" << truckCounter << endl;
		cout << "Motorcycles:\t\t" << motorCycleCounter << endl;
		cout << "Bus:\t\t\t" << busCounter << endl;
	}
	//virtual void removeVehicles() = 0;

};