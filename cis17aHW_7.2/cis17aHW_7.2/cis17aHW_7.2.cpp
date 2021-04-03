// Attached: 
// ===============================================================
// File: 
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This program demonstrates how to build a program with
// class inheritance using a uml key to guide in building.
// ===============================================================
#include "Bird.h"
#include "Mammal.h"
// ===== main ====================================================

// ===============================================================
int main()
{
	Bird bird("Tucan", 2.5, "Blue");
	Mammal mammal("Dairy Cow", 500, "Black and White");

	mammal.showAnimal();
	bird.showAnimal();

	return 0;
}
// ===============================================================




