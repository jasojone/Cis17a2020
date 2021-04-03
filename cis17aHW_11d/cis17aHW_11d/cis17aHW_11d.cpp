// Attached: cis17aHW_11d, 11e, 11f
// ===============================================================
// File: 11d
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description:    This progrma will demonstrate the use of a 
// recursive function to find all even numbers in a set of numbers
// then display the numbers
// ===============================================================
#include <iostream>
using namespace std;

void showEvens(int n);
// ===== main ====================================================

// ===============================================================
int main()
{
    cout << "Here are all even numbers from 1 to 20:\n";
    showEvens(20);
    return 0;
}
void showEvens(int n) {
    if (n > 0) 
    {
        if (n % 2 == 0)
        {
            showEvens(n - 2);
            cout << n << " ";
        }
        else
            showEvens(n - 1);
    }
}