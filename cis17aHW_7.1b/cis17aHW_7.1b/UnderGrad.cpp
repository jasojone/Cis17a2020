#include "UnderGrad.h"
UnderGrad::UnderGrad(int id, int units, string name, string level)
	:Student(id, name, units)
{
	this->id = id;
	this->name = name;
	this->units = units;
	this->level = level;
}
UnderGrad::~UnderGrad(){}

void UnderGrad::displayRecord()
{
	cout << "ID: " << id << "\n" << "Name: " << name << " " << "\n"
		<< "Units: " <<  units << "\n" << "Class: " << level << "\n";
}