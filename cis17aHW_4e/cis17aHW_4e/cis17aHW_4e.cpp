// Attached: 
// ===============================================================
// File: HW_4e
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description:
// This program will take input  from the user and stor it into an
// array of structs. The information will be stored ina binary file 
// the information will then be printed out on the screen. 
// ===============================================================
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Cat.h"
using namespace std;
// ===== main ====================================================
// everything will happen in main first I created the fstream then 
// my array of Cat (struct consisting of two cstrings name and age)
// there is a second arry for the read form the file to the second array
// then I opened the file and set it toa binary file.
// then the file exception handeling for the file is handeled.
// then user input is asked for the array.
// i used seek p to overwrite the information so the file didnt result
// in repetitious array writing. I then fill the second array with 
// the contents of the file and output it to the screen. 
// ===============================================================
int main()
{
	fstream outFile;
	Cat myCats[4]{};
	Cat myCats2[4]{};
	outFile.open("critters.bin", ios::out | ios::binary);
	int i = 0;
	int j = 0;

	cout << "Enter 3 cat records." << endl;
	if (outFile.fail())
	{
		cout << "File failed to load";
		system("pause");
		exit(1);
	}
	while (i < 3)
	{
		outFile.seekp(0L, ios::beg);
		cout << "Enter information about a cat:" << endl;
		cout << "NAME:  " << endl;
		cin >> myCats[i].name;
		cout << "AGE:  " << endl;
		cin >> myCats[i].age;
		outFile.write(reinterpret_cast<char*>(myCats), sizeof(myCats));
		i++;
	}
	outFile.close();
	outFile.open("critters.bin", ios::in | ios::binary | ios::app);
	cout << "Record written to file." << endl;
	cout << "Enter one more cat:" << endl;
	cout << "NAME:  " << endl;
	cin >> myCats[3].name;
	cout << "AGE:  " << endl;
	cin >> myCats[3].age;
	cout << "Here is a list of all cats:" << endl;
	//outFile.seekp(0L, ios::beg);
	outFile.write(reinterpret_cast<char*>(&myCats[3]), sizeof(Cat));
	outFile.close();
	outFile.open("critters.bin", ios::in | ios::binary);

	for (int i = 0; i < 5; i++)
	{
		outFile.read(reinterpret_cast<char*>(&myCats2[i]), sizeof(Cat));
		cout << setw(10) << left << myCats2[i].name;
		cout << setw(5) << right << myCats2[i].age << endl;
	}

	outFile.close();
	return 0;
}
// ===============================================================