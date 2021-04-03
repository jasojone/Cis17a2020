#include "FamousPeople.h"
FamousPeople::FamousPeople() 
{
	name = "";
	quote = "";
	birthdate = Date(0, 0, 0);
}

FamousPeople::FamousPeople(string name, string quote, Date birthdate)
{
	this->name = name;
	this->quote = quote;
	this->birthdate = birthdate;
}

FamousPeople::~FamousPeople(){}

void FamousPeople::setName(string name)
{
	this->name = name;
}

void FamousPeople::setQuote(string quote)
{
	this->quote = quote;
}

void FamousPeople::setDate(int month, int day, int year)
{
	birthdate.setDate(month, day, year);
}

void FamousPeople::displayPerson()
{
	cout << "Name: " << name << "\n";
}

void FamousPeople::displayDate()
{
	birthdate.displayDate();
}
void FamousPeople::displayQuote()
{
	cout << "Quotation: " << "\"" << quote << "\"\n";
}