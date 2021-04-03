// Attached: 
// ===============================================================
// File: 
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This prgram will ask user for input about three 
// presidents. Their number, their name, and ther famouse quote.
// Then it will display the input to the screen. 
// ===============================================================
#include "Presidents.h"
// ===== main ====================================================

// ===============================================================
int main()
{
	Presidents p[3];
	
	int num;
	string name;
	string quote;

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the President’s number: ";
		cin >> num;
		p[i].setNumber(num);

		cout << "Enter his name : ";
		cin.ignore();
		getline(cin, name);
		p[i].setName(name);

		cout << "Enter his quote : ";
		getline(cin, quote);
		p[i].setQuote(quote);
	}
	cout << "The presidents are:" << endl;
	for (int i = 0; i < 3; i++)
	{
		p[i].displayPresidents();
	}	
	return 0;
}
// ===============================================================