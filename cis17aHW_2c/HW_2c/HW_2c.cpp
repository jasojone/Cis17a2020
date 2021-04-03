// Attached: 
// ===============================================================
// File: HW_2c
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This program will take data form a file and print 
// it out in 3 ways. 1) it will print ou the data as student grades
// by student. 2) it iwll print out each students gpa. 3) it will 
// print out the average by subject.
// ===============================================================
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void readGrades(char gradeArr[][3]);
void displayGrades(char gradeArr[][3]);
void calcGpa(char gradeArr[][3]);
void calcSubjectAvg(char gradeArr[][3]);

const int ROW = 5;
const int COLUM = 3;
// ===== main ====================================================
// main will simply call the functions
// ===============================================================
int main()
{
	char gradeArr[5][3];
	int rowAvg;
	ifstream inputFile;

	readGrades(gradeArr);
	displayGrades(gradeArr);
	calcGpa(gradeArr);
	calcSubjectAvg(gradeArr);

	return 0;
}
// ===== readGrades ==============================================
// readgrades will read the data form the file "grades.txt" then
// place them into a 2d array "gradArr".
// INPUT: char data from file "grades.txt"
// ===============================================================
void readGrades(char gradeArr[][3])
{
	ifstream inputFile;
	inputFile.open("grades.txt");

	if (inputFile.fail())
	{
		cout << "File load error";
		exit(1);
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COLUM; j++)
		{
			inputFile >> gradeArr[i][j];
		}
	}
}
// ===== displayGrades ===========================================
// display function will display the grades by student # and subject
// INPUT: char array char gradeArr[][3]
// OUTPUT: display the grades by student # and subject
// ===============================================================    
void displayGrades(char gradeArr[][3])
{
	cout << "All Grades" << endl;
	cout << "Student   Math     Science  English" << endl;

	for (int i = 0; i < ROW; i++)
	{
		cout << "#" << i + 1;

		for (int j = 0; j < COLUM; j++)
		{
			cout << setw(9) << gradeArr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
// ===== calcGrades ==============================================
// this function will calculate the gpas of the students
// to do this the char grades must be converted to number values
// INPUT: char gradeArr
// OUTPUT: student gpas
// =============================================================== 
void calcGpa(char gradeArr[][3])
{
	float numValue, gpa;
	float numTotal = 0;

	cout << "Student GPAs" << endl;
	
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COLUM; j++)
		{
			if (gradeArr[i][j] == 'A')
			{
				numValue = 4;
			}
			else if (gradeArr[i][j] == 'B')
			{
				numValue = 3;
			}
			else if (gradeArr[i][j] == 'C')
			{
				numValue = 2;
			}
			else if (gradeArr[i][j] == 'D')
			{
				numValue = 1;
			}
			else
			{
				numValue = 0;
			}
			numTotal += numValue;
			gpa = numTotal / 3;
		}
		cout << "Student #" << i + 1 << setw(9) << right;
		cout << fixed << showpoint << setprecision(2) << gpa << endl;
		numValue = 0;
		gpa = 0;
		numTotal = 0;
	}
	cout << endl;
}
// ===== calcGrades ==============================================
// this function will calculate the grade averages of each subject
// in order to do this the letter grades will be converted to number
// values.
// INPUT: char gradeArr
// OUTPUT: the average per subject.
// =============================================================== 
void calcSubjectAvg(char gradeArr[][3])
{
	float mathAvg = 0;
	float sciAvg = 0;
	float engAvg = 0;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COLUM; j++)
		{
			if (gradeArr[i][j] == 'A')
			{
				gradeArr[i][j] = 4;
			}
			else if (gradeArr[i][j] == 'B')
			{
				gradeArr[i][j] = 3;
			}
			else if (gradeArr[i][j] == 'C')
			{
				gradeArr[i][j] = 2;
			}
			else if (gradeArr[i][j] == 'D')
			{
				gradeArr[i][j] = 1;
			}
			else
			{
				gradeArr[i][j] = 0;
			}
		}
	}
	
	mathAvg = ((float(gradeArr[0][0]) + float(gradeArr[1][0]) +
		float(gradeArr[2][0]) + float(gradeArr[3][0]) + float(gradeArr[4][0]))
		/ (5.0));
	sciAvg = ((float(gradeArr[0][1]) + float(gradeArr[1][1]) +
		float(gradeArr[2][1]) + float(gradeArr[3][1]) + float(gradeArr[4][1]))
		/ (5.0));
	engAvg = ((float(gradeArr[0][2]) + float(gradeArr[1][2]) +
		float(gradeArr[2][2]) + float(gradeArr[3][2]) + float(gradeArr[4][2]))
		/ (5.0));
	
	cout << "Average GPA by Subject" << endl
		<< "Math\tScience\t English" << endl
		<< mathAvg << "  \t" << sciAvg << "\t " << engAvg << endl;
	
}
// =============================================================== 

