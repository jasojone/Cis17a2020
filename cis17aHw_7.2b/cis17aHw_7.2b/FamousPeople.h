#pragma once
#include "Date.h"
class FamousPeople
{
private:
	string name;
	string quote;
	Date birthdate;
public:
	FamousPeople();
	FamousPeople(string name, string quote, Date birthdate);
	~FamousPeople();
	void setName(string name);
	void setQuote(string quote);
	void setDate(int month, int day, int year);
	void displayPerson();
	void displayDate();
	void displayQuote();
};

