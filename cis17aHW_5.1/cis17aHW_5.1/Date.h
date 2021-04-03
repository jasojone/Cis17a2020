#include <iostream>
#include <string>
using namespace std;

class Date

{
private:
	int prvtMonth;
	int prvtDay;
	int prvtYear;

public:
	Date();
	Date(int month, int day, int year);
	~Date();
	
	void setDate(int month, int day, int year);
	void addDays(int days);
	void displayDate();
};


