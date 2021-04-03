#pragma once
#include "Student.h"

class Grad : Student
{
private:
    int id;
    int units;
    string name;
    string degree;
public:
    Grad(int id, int units, string name, string degree);
    ~Grad();
    void displayRecord();
    void setUnits(int units);
};
