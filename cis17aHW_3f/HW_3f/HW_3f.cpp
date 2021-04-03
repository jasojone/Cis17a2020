// Attached: HW_3f
// ===============================================================
// File: HW_3f
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This program will take 24 hr time(military time) 
// as input by user add a second to the time then disply it. 
// ===============================================================
#include <iostream>
#include "Time.h"
#include <iomanip>
using namespace std;

void getTime(Time& time);
bool isTimeValid(Time& time);
void addOneSecond(Time& time);
void displyTime(Time& time);

const int MAX_HOURS = 24;
const int MAX_MINS = 59;
const int MAX_SECS = 59;

// ===== main ====================================================
// main will simply call the functions and star the do while loop 
// that controlls the porgram operation of running. There is one 
// out statement that will display once the program has meet a full
// cycle. If the user wishes to run the program agan the screen 
// will clear. 
// ===============================================================
int main()
{
	char isRunning = 'Y';

	Time time;
	do
	{
		getTime(time);
		addOneSecond(time);
		displyTime(time);
		cout << "Do it again? (Y/N)  ";
		cin >> isRunning;
		system("cls");
	} 
	while (toupper(isRunning) == 'Y');
	return 0;
}
// ===== getTime =================================================
// this functioun will retrieve the time form the user. The time 
// will be stored in the struct time. there is a do while loop 
// for error handleing if the user inputs the wrong time data.
// the next function for opperation will be called 
// Input: time struct data hours, minutes, seconds.
// output: calls isTimeValid.
// ===============================================================
void getTime(Time& time)
{
	bool isTimeValidCheck = false;

	do
	{
		cout << "Enter the time in ""military time,""(24 - hour format),\n"
			 << "in the following order : HH:MM:SS, (Hours, Minutes, Seconds).\n"
			 << "Hours: ";
		cin >> time.hours;
		cout << "Minutes: ";
		cin >> time.minutes;
		cout << "Seconds: ";
		cin >> time.seconds;

		isTimeValidCheck = isTimeValid(time);
	} 
	while (isTimeValidCheck == false);
}
// ===== isTimeValid =============================================
// This function checks the time ensuring it fit within the 
// required limits of the military time format. If data is correct
// a true statement will be returned to the previouse function 
// getTime ending the do while loop and retruning to main.
// Input: time struct data hours, minutes, seconds.
// Output: a bool of true of false depending on the user input
// 
// ===============================================================
bool isTimeValid(Time& time)
{
	if ((time.hours >= 0) && (time.hours <= MAX_HOURS) 
		&& (time.minutes <= MAX_MINS) && (time.seconds <= MAX_SECS))
		return true;
	else
		cout << "Invalid time\nPlease enter the correct time format\n";
	return false;
}
// ===== addOneSecond ============================================
// this function will add one second to the time 
// Input: time struct data hours, minutes, seconds.
// Output: time struct data hours, minutes, seconds with one second
// added
// ===============================================================
void addOneSecond(Time& time)
{
	time.seconds++;
	if (time.seconds > MAX_SECS)
	{
		time.seconds = 0;
		time.minutes++;
	}
	if (time.minutes > MAX_MINS)
	{
		time.minutes = 0;
		time.hours++;
	}
	if (time.hours > MAX_MINS)
	{
		time.hours = 1;
	}
}
// ===== displayTime =============================================
// this function will display the time to the screen  then return
// to main.
// ===============================================================
void displyTime(Time& time)
{
	cout << "After adding one second, the time is ";
	cout.fill('0');
	cout << setw(2) << time.hours << ":" << setw(2)
		 << time.minutes << ":" << setw(2) << time.seconds << endl;
}
// ===============================================================