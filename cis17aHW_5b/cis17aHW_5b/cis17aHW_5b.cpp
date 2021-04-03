// Attached: 
// ===============================================================
// File: cis17aHW_5b
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This program will take two times in format 
// hh:mm:ss then compair the two. Display messages for the two 
// outcomes. Then add one min and one sec to a third clock.      
// ===============================================================
#include "ClockType.h"
// ===== main ====================================================

// ===============================================================
int main()
{
	ClockType myClock;			 // Calls the default constructor
	ClockType yourClock;			 // Calls the default constructor
	ClockType myOtherClock(0, 0, 0);	 // Calls the overloaded constructor
	int hours, minutes, seconds;
	
	myClock.setTime(3, 30, 0);		 //  Because the default constructor was
	yourClock.setTime(10, 0, 15);	 //     called, set the time for these 2.

	cout << "The time on my clock is  " << myClock.printTime() << endl;
	cout << "The time your clock is  " << yourClock.printTime() << endl;
	
	void areTimesEqual(bool);

	if (myClock.areTimesEqual(myClock, yourClock))
	{
		cout << "The times of my clock and your clock are equal." << endl;
	}
	else
	{
		cout << "The times of my clock and your clock are not equal." << endl;
	}

	cout << "I am going to add 1 minute and 1 second to my other clock." << endl;
	
	myOtherClock.incrementSecs();
	myOtherClock.incrementMins();
	
	cout << "The time of my other clock is    " << myOtherClock.printTime() << endl;

}
