#pragma once
#include "Animal.h"
class Mammal :
    public Animal
{
private:
	string name;
	double weight;
	string hairColor;
public:
	Mammal();
	Mammal(string name, double weight, string hairColor);
	~Mammal();
	void showAnimal();
};