// Attached: 
// ===============================================================
// File: 
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This simple program will aslo demostrate the use of 
// overloaded operators this tmie with a seperate cpp file for the
// class Car.
// ===============================================================
#include "Car.h"
//int Car::numCars = 0;
bool areSame(Car c1, Car c2);
// ===== main ====================================================

// ===============================================================
int main()
{
	Car myCar;
	Car yourCar( "Toyota" , 2007);

	cout << "My Car\n";
	myCar.displayCar();
	
	cout << "Your Car\n";
	yourCar.displayCar();
	
	myCar.setCar("Ford", 2002);
	
	cout << "My Car\n";
	myCar.displayCar();

	if (myCar == yourCar)
		cout << "The cars are the same.\n";
	else
		cout << "The two cars are not the same model and year.\n";
		cout << myCar.getCount() << " cars have been declared.";

	return 0;
}
// ===============================================================

bool areSame(Car c1, Car c2)
{
	if (c1.model == c2.model)
	{
		return true;
	}

	return false;
}
// ===============================================================