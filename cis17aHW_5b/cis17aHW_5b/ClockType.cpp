#include "ClockType.h"
// ----------------------------------------------------------	
// Description:  	Default constructor – Object is constructed
//			and its data members are assigned 0s.
// Precondition:	No parameters passed		
// Postcondition:	hrs=0; mins=0; secs=0
// ----------------------------------------------------------	
ClockType::ClockType(){}
// ----------------------------------------------------------
// Description:  	Constructor – Object is constructed and 
//			data members are set according to parameters.
// Precondition:	hours, minutes, and seconds are passed 
//			when object is instantiated.	
// Postcondition:	hrs=hours; mins=minutes; secs=seconds
// ----------------------------------------------------------	
ClockType::ClockType(int hrs, int mins, int secs)
{
	this->hrs = hrs;
	this->mins = mins;
	this->secs = secs;
}
// ----------------------------------------------------------
// Description:  	Destructor
// ----------------------------------------------------------	
ClockType::~ClockType(){}
// ----------------------------------------------------------	
// Description:  	setTime method sets the time.  Time is set 
//   		according to the parameters.
// Precondition:	hours, minutes, and seconds are passed
// Postcondition:	hrs=hours; mins=minutes; secs=seconds
// ----------------------------------------------------------
void ClockType::setTime(int hrs, int mins, int secs)
{
	this->hrs = hrs;
	this->mins = mins;
	this->secs = secs;
}
// ----------------------------------------------------------	
// Description:  	getTime method returns the time. 
// Precondition:	hours, minutes, and seconds are passed by reference
// Postcondition:	hrs=hours; mins=minutes; secs=seconds
// ----------------------------------------------------------	
string ClockType::getTime(int& hrs, int& mins, int& secs)const
{
	return to_string(hrs) + ":" + to_string(mins) + ":" + to_string(secs);
}
// ----------------------------------------------------------	
// Description:  	incrementSeconds method increments time by one second.
// Precondition:	
// Postcondition:	Time is incremented by one second.
// ----------------------------------------------------------	
void ClockType::incrementSecs()
{
	secs++;
	if (secs > 59)
	{
		secs = 00;
		mins++;
			if (mins > 60)
			{mins = 00;
				hrs++;
				if (hrs > 24)
					hrs = 00;
			}
	}
}
// ----------------------------------------------------------	
// Description:  	incrementMinutes method increments time by one minute.
// Precondition:	
// Postcondition:	Time is incremented by one minute.
// ----------------------------------------------------------	
void ClockType::incrementMins()
{
	mins++;
		if (mins > 60)
		{
			mins = 00;
			hrs++;
			if (hrs > 24)
				hrs = 01;
		}
}
// ----------------------------------------------------------	
// Description:  	incrementHours method increments time by one hour
// Precondition:	
// Postcondition:	Time is incremented by one hour.
// ----------------------------------------------------------
void ClockType::incrementHrs()
{
	hrs++;
	if (hrs > 24)
		hrs = 01;
}
// ----------------------------------------------------------	
// Description:  	printTime method prints the time.
// Precondition:	
// Postcondition:	Time is printed in the form:  hh:mm:ss
// ----------------------------------------------------------	
string ClockType::printTime()
{
	return to_string(hrs) + ":" + to_string(mins) + ":" + to_string(secs);
}
// ----------------------------------------------------------	
// Description:  	areTimesEqual method compares two times.
// Precondition:	
// Postcondition:  	Returns true if this time is equal to otherClock.  
//		Otherwise returns false.
// ----------------------------------------------------------
bool ClockType::areTimesEqual(ClockType myClock, ClockType yourClock)
{
	if (myClock.hrs == yourClock.hrs && myClock.mins == yourClock.mins &&
		myClock.secs == yourClock.secs)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//bool ClockType::operator ==(const ClockType& yourClock)
//{
//	//if(this->hrs == yourClock.getHrs() && )
//	return true;
//}