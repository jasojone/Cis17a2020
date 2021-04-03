#include "Student.h"

Student::Student() 
{
	id = 0;
	name = "";
	units = 0;
}

Student::Student(int id, string name, int units)
{
	this->id = id;
	this->name = name;
	this->units = units;
}
Student::~Student(){}

void Student::setId(int id)
{
	this->id = id;
}

void Student::setName(string name)
{
	this->name = name;
}

void Student::setUnits(int units)
{
	this->units = units;
}

void Student::displayRecord()
{
	cout << "ID: " << id << "\n" << "Name: " << name << " " << "\n"
		<< "Units: " << units << "\n";
}