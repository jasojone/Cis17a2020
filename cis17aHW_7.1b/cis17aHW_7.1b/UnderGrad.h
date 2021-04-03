#pragma once
#include "Student.h"
                         
class UnderGrad : Student
{
private:
    int id;
    int units;
    string name;
    string level;
public:
    UnderGrad(int id, int units, string name, string level);
    ~UnderGrad();
    void displayRecord();
};

