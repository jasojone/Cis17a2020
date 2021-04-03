// Attached: cis17aHw_8a, 8b, 8c, 8d
// ===============================================================
// File: hw8aHW_8a
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: 
// This program uses the "max" template function.
// It returns the greater of two values.
// ===============================================================
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// ===== main ====================================================

// ===============================================================
int main()
{
	int num1 = 1;
	int num2 = 2;
	char char1 = 'a';
	char char2 = 'z';
	double dub1 = 3.14;
	double dub2 = 2.72;

	cout << "The greater value of 1 and 2= " << max(num1, num2) << endl;
	cout << "The greater value of 2 and 1 = " << max(num1, num2) << endl;
	cout << "The greater value of 'a' and 'z' = " << max(char1, char2) << endl;
	cout << "The greater value of 3.14 and 2.72 is = " << max(dub1, dub2) << endl;

	return 0;
}
// ===============================================================