// Attached: 
// ===============================================================
// File: 
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This program demonstraits the use of a class within
// a class.   
// ===============================================================
#include "Date.h"
#include "FamousPeople.h"
// ===== main ====================================================

string returnWordNum(int i);
void getFamousPeople(FamousPeople famousPeople[]);
void displayFamousPeople(FamousPeople famousPeople[]);

// ===============================================================
int main()
{
	FamousPeople famousPeople[3];

	getFamousPeople(famousPeople);
	displayFamousPeople(famousPeople);

	return 0;
}
// ===============================================================

string returnWordNum(int i)
{
	switch (i)
	{
	case 0:
		return " first ";
		break;
	case 1:
		return " second ";
		break;
	case 2:
		return " third ";
		break;

	}

	return " error ";
}
void getFamousPeople(FamousPeople famousPeople[])
{
	for (int i = 0; i < 3; i++)
	{
		string name;
		string quote;
		int month, day, year;

		cout << "Enter the" << returnWordNum(i) << "famous person: ";
		getline(cin, name);
		famousPeople[i].setName(name);
		cout << "Enter their quotation: ";
		getline(cin, quote);
		famousPeople[i].setQuote(quote);

		cout << "Enter their birthdate \n";
		cout << "Month: ";
		cin >> month;
		cout << "Day: ";
		cin >> day;
		cout << "Year: ";
		cin >> year;

		famousPeople[i].setDate(month, day, year);
		cin.ignore();
		system("CLS");
	}
}

void displayFamousPeople(FamousPeople famousPeople[])
{
	for (int i = 0; i < 3; i++)
	{
			famousPeople[i].displayPerson();
			famousPeople[i].displayDate();
			famousPeople[i].displayQuote();
	}
}