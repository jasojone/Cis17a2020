// Attached: 
// ===============================================================
// File: cis17aHW_8c
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This program will demonstrate the use of vectors and
// user input. 
// ===============================================================
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
// ===== main ====================================================

// ===============================================================
int main()
{
    const int NUM_EMPLOYEES = 5;
    vector <int> hours(NUM_EMPLOYEES);
    vector <double> wages(NUM_EMPLOYEES);
    cout << "Enter hours worked and hourly wage of each employee:\n\n";
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Hours for Employee #" << i + 1 << ":  ";
        cin >> hours[i];

        cout << "Wage for Employee #" << i + 1 << ":  ";
        cin >> wages[i];
    }

    system("cls");
    cout << fixed << setprecision(2);
    cout << "Gross pay for each employee:\n\n";

    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << setw(11) << "Employee #" << i + 1 << setw(5) << "$"
            << setw(7) << wages[i]*hours[i] << endl;

    }

    cout << "Employee #1 hours = " << hours.front()<< "\n";

    cout << "Employee #5 hours = " << hours.back() << "\n";

    return 0;
}

// ===============================================================