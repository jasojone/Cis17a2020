// Attached: 
// ===============================================================
// File: HW_1b.cpp
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description:
// this program will ask the user to input 3 different temperature 
// values. Then it will calculate the average and print it out.
// ===============================================================

#include <iostream>
#include <iomanip>
using namespace std;

void getTemps(float&, float&, float&);
float calcAvg(float, float, float, float);
void displayAvg(float);
//====== main =====================================================

//=================================================================
int main()
{
    float temp1, temp2, temp3;
    float averageTemp = 0;
    
    getTemps(temp1, temp2, temp3);
    averageTemp = calcAvg(temp1, temp2, temp3, averageTemp);
    displayAvg(averageTemp);

    
    return 0;
}
//====== getTemps =================================================
// this is a void function that will gain input from the user. 
// 3 different temperatures. 
// Inpout: 3 float values temperatures. 
//=================================================================
void getTemps(float& temp1, float& temp2, float& temp3)
{
    cout << "Please enter temperature of 3 cities." << endl;
    cout << "#1 ";
    cin >> temp1;
    cout << "#2 ";
    cin >> temp2;
    cout << "#3 ";
    cin >> temp3;    
}
//====== calcAvg =================================================
// this is a value returning function that will calculate the 
// average temperature of the 3 cities
// Input: 3 float values (temperaturs form user) 1 calculated float
// from the main
// Output: a float average temp
//=================================================================
float calcAvg(float temp1, float temp2, float temp3, float averageTemp)
{
    averageTemp = (temp1 + temp2 + temp3) / 3;
    return averageTemp;
}
//====== displayAvg ===============================================
// this function will display the average temp
// Input: a flaot form the calcAvg function.

//=================================================================
void displayAvg(float averagTemp)
{
    cout << "The average temerature is ";
    cout << fixed << setprecision(2) << showpoint << averagTemp << endl;
}