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
Extended searchfunction to search for other parametres.


Things to be done:
-Use StringCompare instead of ==, also to secure that the input is the desired one.
-Add "enter " on every menychoice to clarify.
-If registeredVehicles == numberOfParkingSpots, garage is full and no more vehicles can be added.
-Make a searchfunction for brandname.
-Make a searchfunction for the parkingspace so that the contents on that space can be removed (with the currentin removefunction no bicycles can be removed).
-Have a lookover at the menualternatives to make sure that 0 is needed to exit the current menu.
-Make a max/min limit for the number of characters registered when adding a vehicle on each post(especially reg.nr).
-In the remove-function, before the deletion and removal of the object, add the contents to a vector containing "removed-vehicles". Practical if one would like to add this vehicle again to the garage (long-distance drive for eg.).
-If the garageCollection contains an object with garagename identical to the one the user is trying to add, garagename is invalid and the user returns to the add-garage menu.
-Add adress as attribute for the garage-class.
-Add function to list garages with available parkingspots in the mainmenu.
-Add more IoT as rooflights, gate, charging and more.
-Create an image that shows where the available parkingspots are located in the garage.
-Create a graphics-class, practice som graphics with windows.h, JUST FOR FUN!









