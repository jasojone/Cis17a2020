// Attached: cis17aHW_11d, 11e, 11f
// ===============================================================
// File: 11e
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description:    This progrma will demonstrate the use of a 
// recursive function to find all odd numbers in a set of numbers
// then display the numbers
// ===============================================================

#include <iostream>
using namespace std;

void showOdds(int n);

int main()
{
    cout << "Here are all even numbers from 1 to 20:\n";
    showOdds(20);
    return 0;
}
void showOdds(int n) {
    if (n > 0)
    {
        if (n % 2 == 1)
        {
            showOdds(n - 2);
            cout << n << " ";
        }
        else
            showOdds(n - 1);
    }
}