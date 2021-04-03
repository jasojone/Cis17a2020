#pragma once
#include <iostream>
#include <string>

using namespace std;
class Presidents
{
private:
	int number;
	string name;
	string quote;
public:
	Presidents();
	~Presidents();

	void setNumber(int numebr);
	void setName(string name);
	void setQuote(string quote);
	void displayPresidents();
};

