#include "Mammal.h"

Mammal::Mammal()
{
	this->name = " ";
	this->weight = 0;
	this->hairColor = " ";
}

Mammal::Mammal(string name, double weight, string hairColor)
{
	this->name = name;
	this->weight = weight;
	this->hairColor = hairColor;
}
Mammal::~Mammal() {}

void Mammal::showAnimal()
{
	cout << "Mammals are vertebrates in the Mammalia class.\n" <<
		"This " << hairColor << " " << name << "weighs " << weight << " pounds." << endl;
}