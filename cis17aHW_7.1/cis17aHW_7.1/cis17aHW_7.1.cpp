// Attached: HW_7.1 , 7.1b
// ===============================================================
// File: cis17aHW_7.1
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This program will demonstrate how to effectivly 
// build a program using a UML class diagram.       
// ===============================================================
#include "Student.h"
// ===== main ====================================================

// ===============================================================
int main()
{
	Student s1(0, "", 0);
	Student s2(100, "Tom P. Lee", 12);
	
	s1.displayRecord();
	s2.displayRecord();

	s1.setId(101);
	s1.setName("John Lee Hooker");
	s1.setUnits(15);

	s1.displayRecord();

	return 0;
}
// ===============================================================
