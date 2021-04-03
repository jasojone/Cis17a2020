// Attached: 
// ===============================================================
// File: 
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description:
//
//
//
//      
// ===============================================================
#include <iostream>
#include <string>
#include <fstream>
#include "Cat.h"
using namespace std;
// ===== main ====================================================

// ===============================================================
int main()
{
	fstream outFile;
	Cat myCats[4];
	outFile.open("critters.bin", ios::out | ios::binary);
	int i = 0;
	char outPut[64];

	cout << "Enter 3 cat records." << endl;
	if (outFile.is_open())
	{
		while (i < 4)
		{
			cout << "Enter information about a cat:" << endl;
			cout << "NAME:  " << endl;
			cin >> myCats[i].name;
			cout << "AGE:  " << endl;
			cin >> myCats[i].age;
			outFile.write(reinterpret_cast<char*>(myCats), sizeof(myCats));
			i++;
		}
		cout << "Record written to file." << endl;
	}
	else cout << "File failed to load";
	outFile.read(reinterpret_cast<char*>(myCats), sizeof(myCats));
	
	cout << myCats;
	outFile.close();

	return 0;
}
// ====================