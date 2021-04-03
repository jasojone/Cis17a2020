#pragma once
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Car
{
private:
	string model = "";
	int year = 0;
	static int numCars;
public:
	Car();
	Car(string model, int year);
	~Car();
	void setCar(string model, int year);
	int getCount();
	void displayCar();
	friend bool areSame(Car c1, Car c2);
	bool operator==(Car& otherCar)
	{
		if ((this->model == otherCar.model))
			return true;
		return false;
	}
};

