#include "Date.h"

Date::Date()
{

}

Date::Date(int month, int day, int year)
{
	prvtMonth = month;
	prvtDay = day;
	prvtYear = year;
}
Date::~Date(){}

void Date::setDate(int month, int day, int year)
{
	prvtMonth = month;
	prvtDay = day;
	prvtYear = year;
		
}
void Date::addDays(int days)
{
	prvtDay += days;
	if (prvtDay >= 30)
	{
		prvtDay -= 30;
		prvtMonth++;
		if (prvtMonth > 12)
		{
			prvtMonth = 1;
			prvtYear++;
		}
	}
	
}
void Date::displayDate()
{
	cout << prvtMonth << "/" << prvtDay << "/" << prvtYear << endl;
}


