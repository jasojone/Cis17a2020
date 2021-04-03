// Attached: 
// ===============================================================
// File: 
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This program will take input from the user to fill 
// information about 3 cat classes. Then output the cats saying
// MEOW.      
// ===============================================================
#include "Cat.h"

// ===== main ====================================================

// ===============================================================
int main()
{
	Cat Fluffy;
	Cat Tom;
	Cat Kitty;

	int weight;
	string color;

	cout << "Describe Fluffy. What does she weight ?";
	cin >> weight;
	Fluffy.setWeight(weight);
	cout << "\nWhat color is she?  ";
	cin >> color;
	Fluffy.setColor(color);

	cout << "\nDescribe Tom. What does he weight ?";
	cin >> weight;
	Tom.setWeight(weight);
	cout << "\nWhat color is he?  ";
	cin >> color;
	Tom.setColor(color);

	cout << "\nDescribe Kitty. What does she weight ?";
	cin >> weight;
	Kitty.setWeight(weight);
	cout << "\nWhat color is she?  ";
	cin >> color;
	Kitty.setColor(color);

	cout << "Fluffy says:  ";
	Fluffy.displayinfo();
	cout << "Tom says:  ";
	Tom.displayinfo();
	cout << "Kitty says:  ";
	Kitty.displayinfo();

	return 0;
}
// ===============================================================