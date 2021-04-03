#include "Grad.h"
Grad::Grad(int id, int units, string name, string degree)
	:Student(id, name, units)
{
	this->id = id;
	this->name = name;
	this->units = units;
	this->degree = degree;
}
Grad::~Grad() {}
void Grad::displayRecord()
{
	cout << "ID: " << id << "\n" << "Name: " << name << " " << "\n"
		<< "Units: " << units << "\n" << "Degree: " << degree << "\n";
}
void Grad::setUnits(int units)
{
	this->units = units;
}