#include "Animal.h"
Animal::Animal()
{
	this->name = " ";
	this->weight = 0;
}
Animal::Animal(string name, double weight)
{
	this->name = name;
	this->weight = weight;
}
Animal::~Animal(){}