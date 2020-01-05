#pragma once

#include <iostream>
#include "GarageHeader.h"

using namespace std;

class AdminGarage {

private:
	int garageCounter = 0;
	Garage* mainGarage;
	vector<Garage*> garageCollection;
	void createGarage();
	void addGarageToCollection();
	void listGarage();
	void accessGarage();
	void searchGarage();
	void removeGarage();
public:
	AdminGarage() {};
	~AdminGarage() {};
	void startAdmin();
};

