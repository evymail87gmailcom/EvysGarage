Task:
Create a Garageapplication that holds a number of vehicles and simulates functions that can occur in an actual garage.

Need-to-have for the assignment:

Classes:
An abstract baseklass, Vehicle, to be inherited by subclasses Car, Bicycle, Motorcycle, Truck and Bus.
A garageclass that holds the functionality of the garage and an array of Vehicles.

FUNCTIONS:
ListVehicles-prints all vehicles in the garage.
ListTypeOfVehicles- prints all vehicletypes and how many of them there are in the garage.
AddVehicle-Adds a vehicle to the garage.
RemoveVehicle-removes a vehicle from the garage.
MaxVehicles-have a maximum limit of parkingspots when instantiating a new garage.
SearchVehicle- search for registrationnumber.
Extended searchfunction to search for other paremetres.





Functiontesting:

Function: AddGarage-to manually add a garage
-When adding a new garage, the name and number of parkingspots is overwritten and any new vehicle is added to the existing collection. 
-If one adds 2 out of 3 vehicles the last place in the vector is duplicated by the last entry.



Function: DefaultGarage- Instantiation of a defaultgarage to show UI-functions
-Add a function that prints the element where the vehicle is parked.
-Create a function to print extended attributes for more information about the vehicles.

Possible solution and further developement:
-Make a new class for the Admin, this might make it easier to 