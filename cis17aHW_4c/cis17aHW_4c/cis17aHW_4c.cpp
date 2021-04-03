// Attached: 
// ===============================================================
// File: HW_4c
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This is a simple program that will read numbers from
// a file data.txt
// ===============================================================
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// ===== main ====================================================
//// For this program everything happens in main. First an int is 
// created to store the data from the file as its being read.
// we create the file object MyReadfile and open data.txt
// then I check for the exception of the file not being open with 
// the if statement. 
// I then use a while loop to read the file contents and assign them
// to myData then out put them 
// Input: data from file data.txt
// Output: cout data form file data.txt and write the data to 
// "results.txt"

// ===============================================================
int main()
{
	string myData;
	string userInput;

	fstream MyReadFile("data.txt");
	fstream MyWriteFile("results.txt", ios::out | ios::app);

	if (MyWriteFile.fail())
	{
		cout << "File did not Open\n";
		return 1;
	}

	if (MyReadFile.fail())
	{
		cout << "File did not Open\n";
		return 1;
	}

	cout << "Here are the numbers in the file: " << endl;

	while (getline(MyReadFile, myData))
	{
		cout << myData << endl;
		MyWriteFile << myData;
	}

	cout << "Please enter 3 numbers:" << endl;
	cin >> userInput;
	MyWriteFile << userInput;
	
	
	cout << "The numbers have been written (appended) to results.txt." << endl;
	
	MyReadFile.close();
	MyWriteFile.close();
	return 0;
}
// ==============================================================