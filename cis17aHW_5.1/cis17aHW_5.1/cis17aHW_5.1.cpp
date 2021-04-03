// Attached: HW_5a & HW_5b
// ===============================================================
// File: cis17aHW_5.1
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This program will ask the user for their payday.
// print todays date then print their pay day and their following
// payday.
// ===============================================================
#include "Date.h"

// ===== main ====================================================

// ===============================================================
int main()
{
	Date todaysDate(9, 30, 20);
	Date payDay;
	int month, day, year;

	cout << "When is your Pay day?" << endl;
	cout << "Month"<< endl;
	cin >> month;
	cout << "Day" << endl;
	cin >> day;
	cout << "Year" << endl;
	cin >> year;
	
	payDay.setDate(month, day, year);
	cout << "Todays date is" << endl;
	todaysDate.displayDate();
	cout << "Pay day is" << endl;
	payDay.displayDate();
	payDay.addDays(7);
	cout << "Next pay day is " << endl;
	payDay.displayDate();
	cout << "The following pay day is " << endl;
	payDay.addDays(7);
	payDay.displayDate();





	return 0;
}
// =========================================================