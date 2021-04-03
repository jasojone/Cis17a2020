#include "Presidents.h"
Presidents::Presidents()
{

}
Presidents::~Presidents() {}

void Presidents::setNumber(int number)
{
	this->number = number;
}
void Presidents::setName(string name)
{
	this->name = name;
}
void Presidents::setQuote(string quote)
{
	this->quote = quote;
}
void Presidents::displayPresidents()
{
	
	cout << name << ", #" << number << " President, said:\n"
		<< "\"" << quote << "\"" << endl;
}