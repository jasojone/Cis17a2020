#include <iostream>
#include <string>
#pragma once

using namespace std;

class ClockType
{
private:
	int hrs;
	int mins;
	int secs;

public:
	ClockType();
	ClockType(int hrs, int mins, int secs);
	~ClockType();
	void setTime(int hrs, int mins, int secs);
	string getTime(int &hrs, int &mins, int &secs)const;
	void incrementSecs();
	void incrementMins();
	void incrementHrs();
	string printTime();
	bool areTimesEqual(ClockType myClock, ClockType yourClock);
};
