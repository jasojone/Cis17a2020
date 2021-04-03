// Attached: 
// ===============================================================
// File: HW_2d
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description:
// this program will use a sequential search to find id numbers. 
// the user will enter an id and the program will search through an
// array of id numbers and determine if the id is in the array. 
// the program will then return the location of the id in the array.      
// ===============================================================
#include <iostream>
using namespace std;
int askUser(int serchedId);
int searchArr(int idNumbers[], int SIZE,  int serchedId);

const int SIZE = 5;
// ===== main ====================================================
// the main function will call all the functions and output the 
// results from the search.
// output: the findings of the search
// ===============================================================
int main()
{
    int serchedId = 0;
    int index;
    int idNumbers[]{ 12345, 54321, 11223, 33211, 44411 };

    serchedId = askUser(serchedId);
    index = searchArr(idNumbers, SIZE, serchedId);

    if (index != -1)
        cout << serchedId << " was found at index " << index << endl;
    else
        cout << serchedId << " was not found in the list." << endl;
    return 0;
}
// ===== askUser =================================================
// this function will ask the user for the id they wish to search
// Input: int from user and assigne it to searchedId 
// Output: int serchedId
// ===============================================================
int askUser(int serchedId)
{
    cout << "Please enter ID you want to search" << endl;
    cin >> serchedId;
    return serchedId;
}
// ===== serchArr ================================================
// this function will search the array idNumbers
// Input: passed int searched Id, Array idNumbers, Const int SIZE
// Output: The index number of the id if found
// ===============================================================
int searchArr(int idNumbers[], int SIZE , int serchedId)
{
    int index = 0;
    bool found = false;

    while (index < SIZE && !found)
        if (idNumbers[index] == serchedId)
            found = true;
        else
            index++;
    if (found)
        return index;
    else
        return -1;
}