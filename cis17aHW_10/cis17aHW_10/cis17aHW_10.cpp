// Attached: cis17aHW_10a and 10b
// ===============================================================
// File: cis17aHW_10a
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description:   This program will demonstrate the compile time of 
// decently large computation using no threads
// ===============================================================
#include <iostream>
#include <ctime>		// ctime is part of the standard library
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

void writeRoots();
void writeSquares();
// ===== main ====================================================

// ===============================================================
int main()
{
	cout << "Main: startup" << endl << endl;
	//  Declare two variables of clock_t data type:
	clock_t start;		//  clock_t is a class included in <ctime>
	clock_t end;		//  start and end are objects of clock_t data type 

	start = clock();	// clock() is defined in  <ctime>, and returns 
	//      the current system time (the starting time).

	// . . . All code to be timed goes here 
	//         between start and end . . . 

	cout << "Calling functions to work" << endl << endl;
	writeRoots();
	writeSquares();

	end = clock();		// Get the ending time.

	// CLK_TCK is part of <ctime> and returns the time in seconds.
	cout << "Runtime = " << (end - start) / CLK_TCK << " seconds." << endl << endl;
	cout << "Main: done" << endl << endl;
	return 0;
}
void writeRoots()
{
	ofstream fout;
	fout.open("roots.txt");

	cout << "Writting 1,000,000 squar roots to roots.txt" << endl << endl;
	for (int i = 1; i < 1000000; i++)
	{
		fout << sqrt(i) << "\n";
	}
	fout.close();
	cout << "The square roots are ready" << endl << endl;
}

void writeSquares()
{
	ofstream fout;
	fout.open("squares.txt");

	cout << "Writting 1,000,000 squares to squares.txt" << endl << endl;
	for (int i = 1; i < 1000000; i++)
	{
		fout << pow(i, 2) << "\n";
	}
	fout.close();
	cout << "The squares are ready" << endl << endl;
}
// ===== OUTPUT ==================================================

// ===============================================================