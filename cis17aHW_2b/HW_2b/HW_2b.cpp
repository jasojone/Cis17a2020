// Attached: 
// ===============================================================
// File: HW_2b
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: this program will ask the user to enter a number 12
// times. it will take the 12 numbers in input them into a 2d array
// 3 rows and 4 colums
// ===============================================================
#include <iostream>
#include <iomanip>
using namespace std;
const int ROW = 3;
const int COLUM = 4;
void getData(int numArray[][COLUM]);
void displayArray(int numArray[][COLUM]);

// ===== main ====================================================
// main will simply call the functions
// ===============================================================
int main()
{
     int numArray[ROW][COLUM];  
     getData(numArray);
     displayArray(numArray);
}
// ===== getData =================================================
// getdata will get the numbers form the user
// INPUT: 12 number form the user that wil go into the array index
// with the use of nested for loops
// ===============================================================
void getData(int numArray[][COLUM])
{
    int i, j;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter a number:  ";
            cin >> numArray[i][j];
        }
        cout << endl;
    }
}
// ===== displayArray ============================================
// displayarray will output the array with the use of nested for 
// loops
// OUTPUT: the 2d array 
// ===============================================================
void displayArray(int numArray[][COLUM])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << setw(6) << numArray[i][j];
        }
        cout << endl;
    }
}
// ===============================================================