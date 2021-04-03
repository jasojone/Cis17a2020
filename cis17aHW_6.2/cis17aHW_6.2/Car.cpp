#include "Car.h"
int Car::numCars;

Car::Car()
{
	numCars++;
	model = "";
	year = 0;
}

Car::Car(string model, int year)
{
	numCars++;
	this->model = model;
	this->year = year;
}

Car::~Car() {}

void Car::setCar(string model, int year)
{
	this->model = model;
	this->year = year;
}

int Car::getCount()
{
	return numCars;
}

void Car::displayCar()
{
	cout << "Model: " << model << "\n" << "Year: " << year << "\n";
}
