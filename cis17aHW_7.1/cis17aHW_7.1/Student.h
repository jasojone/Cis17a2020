#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	int id;
	int units;
	string name;
public:
	Student();
	Student(int id, string name, int units);
	~Student();
	void setId(int id);
	void setName(string name);
	void setUnits(int units);
	void displayRecord();
};

