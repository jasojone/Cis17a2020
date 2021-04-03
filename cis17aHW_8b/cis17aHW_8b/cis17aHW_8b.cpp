// Attached: 
// ===============================================================
// File: cis17aHW_8b
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This simple program demonstrates the use of a vector
// and some of its main functions push_back, insert, erase, size, and 
// pop_back 
// ===============================================================
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// ===== main ====================================================

// ===============================================================
int main()
{
    // create the vector.
    vector <int> values;
    
    //push 5 int elements to the vector. 
    values.push_back(1);
    values.push_back(2);
    values.push_back(4);
    values.push_back(9);
    values.push_back(5);
    
    // output the vector using a for loop. 
    cout << "A Vector with 5 integer elements pushed onto it: \n";
    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i] << " ";
    }
    cout << endl << endl;

    // add an element to the bigining. 
    auto it = values.insert(values.begin(), 3);

    // output the vector using a for loop. 
    cout << "A Vector with a 3 added at the begining: \n";
    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i] << " ";
    }
    cout << endl << endl;

    // remove an elemnet from the begining. 
    values.erase(values.begin());

    // output the vector using a for loop. 
    cout << "A Vector with the 3 removed form the begining: \n";
    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i] << " ";
    }
    cout << endl << endl;

    // remove an elemnet from the end.
    cout << "Vector with the 5 removed at the end: \n";
    values.pop_back();


    // output the vector using a for loop. 
    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i] << " ";
    }
    cout << endl << endl;

    //// output the vectors element size. 
    int vecValues = values.size();
    cout << "There are " << vecValues << " integer elements in the Vector." <<endl;
    return 0;
}
// ===============================================================
