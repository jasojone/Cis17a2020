#include "Bird.h"

Bird::Bird()
{
	this->name = "";
	this->weight = 0;
	this->featherColor = "";
}

Bird::Bird(string name, double weight, string featherColor)
{
	this->name = name;
	this->weight = weight;
	this->featherColor = featherColor;
}
Bird::~Bird(){}

void Bird::showAnimal()
{
	cout << "Birds are vertebrates in the Aves class.\nThis " << name << " has "
		<< featherColor << " feathers and weighs " << weight << " pounds." << endl;	
}