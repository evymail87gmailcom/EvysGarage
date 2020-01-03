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
-The counters on each vehicle gets a default value of 2, probably because they are set to the value of 2 in the defaultGarage, 
however all counters needs to be looked over and I need to decide what I need them for and where to show them.
-Some disruptiveness with the AddVehicle-menu, double O needs to be pressed if you regret the choice "Adding vehicles" when instantiating
a new, manual garage. Also, when that occurs the counter will still interpret this as a created vehicle-object.
-Read up on cin.ignore/failbit etc and work with errorhandling on the input-fields. Make a function for this.
-Use StringCompare instead of ==, also to secure that the input is the desired one.
-Remove unused functions and variables!!








