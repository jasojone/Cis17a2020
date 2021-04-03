// Attached: 
// ===============================================================
// File: HW_71b
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description:This program will utilize classes and inheritance. 
// there will be one parent class and two child classes that will
// inherit the parent. Each child class will posses data which is  
// unique.      
// ===============================================================
#include "Student.h"
#include "UnderGrad.h"
#include "Grad.h"
#include "cis17aHW_7.1b.h"
// ===== main ====================================================

// ===============================================================
int main()
{
	UnderGrad underGrad(100, 9, "Tom Lee", "Freshman");
	Grad grad(101, 12, "Jim Jones", "PHD");

	underGrad.displayRecord();
	grad.displayRecord();
	grad.setUnits(15);
	grad.displayRecord();
	return 0;
}
// ===============================================================




