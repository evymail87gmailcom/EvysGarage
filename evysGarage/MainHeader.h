#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;



/*Garaget behöver innehålla funktionerna
-Parkera fordon
-Hämta fordon
-Se fordon
-
*/

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
	virtual void addVehicle() = 0;
	virtual void addVehicleAttributes() = 0;
	virtual void getVehicle() = 0;
	virtual void listVehicles() = 0;
	virtual void removeVehicles() = 0;
	virtual void printVehicleAttributes() = 0;

};




//Subklass cykel
class Bicycle :public Vehicle {
protected:
	string typeOfBike;
	string electric;
public:
	Bicycle() {

		nameOfBrand = "";
		color = "";
		typeOfWheels = "";
		numberOfGears = 0;
		typeOfBike = "";
		electric = "yes";
	};
	Bicycle(string colorIn, string brandIn, int numberOfGearsIn, string wheelsIn, string typeOfBikeIn, bool electricIn) {
		nameOfBrand = brandIn;
		color = colorIn;
		typeOfWheels = wheelsIn;
		numberOfGears = numberOfGearsIn;
		typeOfBike = typeOfBikeIn;
		electric = electricIn;
	};

	void addVehicleAttributes() {
		cout << "Enter nameOfBrand: " << endl;
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
	};
	void printVehicleAttributes() {
		cout << "\n";
		cout << "Name:\t\t" << nameOfBrand << endl;
		cout << "Color:\t\t" << color << endl;
		cout << "Type of wheels:\t" << typeOfWheels << endl;
		cout << "Number of gears:" << numberOfGears << endl;
		cout << "Type of bike:\t" << typeOfBike << endl;
		cout << "Electric:\t" << electric << endl;

	}
	void addVehicle() {
		
	}
	void getVehicle() {
		cout << "sort vehicles" << endl;
	};
	void listVehicles() {
		cout << "Choose a parameter to sort the list on" << endl;
	};
	void removeVehicles() {
		cout << "Delete objekt of choice: " << endl;
	};





	~Bicycle() {};
};

/*Subklass Motorcykel
class MotorCycle :public Vehicle {
protected:
	struct vehicle motorBike;
public:
	MotorCycle() {};
	MotorCycle() {};
	~MotorCycle() {};
};
//Subklass Bil
class Car :public Vehicle {
protected:
	struct vehicle car;
public:
	Car() {};
	Car() {};
	~Car() {};
};
//Subklass Bus
class Bus :public Vehicle {
protected:
	struct vehicle bus;
public:
	Bus() {};
	Bus() {};
	~Bus() {};
};
//Subklass Lastbil
class Truck :public Vehicle {
protected:
	struct vehicle truck;
public:
	Truck() {};
	Truck() {};
	~Truck() {};
};


 */

class Garage {
protected:
	int anyVehicle;
	int numberOfVehicles;
	Vehicle* myVehicle;
	vector <Vehicle*>myGarage;
	string nameOfGarage;
public:
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
		cin >> anyVehicle;
		switch (anyVehicle)
		{
		case 1: {
			myVehicle = new Bicycle();
			myVehicle->addVehicleAttributes();
			myVehicle->printVehicleAttributes();
			

		}
		default:
			break;
		}
	};

	void addVehicle() {
		
		myGarage.push_back(myVehicle);
	}
	void printVehicle() {
		for (int i = 0; i < myGarage.size() - 1; i++) {
			cout << i << endl;
		}
	}

	//virtual void getVehicle() = 0;
	//virtual void listVehicles() = 0;
	//virtual void removeVehicles() = 0;
};