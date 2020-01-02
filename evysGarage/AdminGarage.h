#pragma once

#include <iostream>
#include "GarageHeader.h"

using namespace std;

class AdminGarage {
public:
	int garageCounter;
	Garage *mainGarage;
	vector<Garage*> garageCollection;




	AdminGarage() {
		garageCounter=0;
	};

	void createGarage();
	
	void addGarageToCollection();
	void listGarageAttributes();
	void searchGarage();
	void removeGarage();



	
	void listGarage();
	
	void accessGarage();
	
	
	
	
	~AdminGarage() {};
};

