#pragma once
#include <iostream>
#include <string>

using namespace std;
class Cat
{
private:
	int weight;
	string color;
	string quote;
public:
	Cat();
	~Cat();

	void setWeight(int weight);
	void setColor(string color);
	void displayinfo();
};

