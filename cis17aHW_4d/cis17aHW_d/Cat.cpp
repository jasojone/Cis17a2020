#include "Cat.h"
Cat::Cat() {}
Cat::~Cat() {}

void Cat::setWeight(int weight)
{
	this->weight = weight;
}
void Cat::setColor(string color)
{
	this->color = color;
}
void Cat::displayinfo()
{
	cout << "MEOW!\n";
}