// Attached: 
// ===============================================================
// File: HW_1a.cpp
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description:
// This program will take 5 test scores form user input then 
// print the scores out or print out as an average.
// ===============================================================
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void getScores(double testScores[]);
void showMenu();
char getChoice(char);
void displayResults(double testScores[]);
const int SIZE = 5;
//===== main =====================================================
// the main function will call getScores and pass the testScores 
// array. Once the array values are gathered then showMenu will
// be called. Then get choice will be called and choice will be 
// returned. If choice is a the function dicplayResults will 
// print out. if choice is b the test score will simply print
// to the screen.
// Input: a char returned value from get choice
//================================================================
int main()
{
    double testScores[5];
    char choice = ' ';

    getScores(testScores);
    showMenu();
    choice = getChoice(choice);

    if (choice == 'a' || choice == 'A')
    {
        system("CLS");
        displayResults(testScores);
    }
    else if (choice == 'b' || choice == 'B')
    {
        for (int i = 0; i < SIZE; i++)
        {
            system("CLS");
            cout << testScores[i] << endl;
        }
    }
    else
    {
        cout << "Invalid entry!";
    }
    return 0;
}
//===== getScores ================================================
// gaines user input, 5 test scores
// Input: 5 double values from user.
// OutPut: returns the values to the array testScores in main.
//================================================================
void getScores(double testScores[])
{
        cout << "Enter 5 test scores:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> testScores[i];
    }
    system("CLS");
}
//===== showMenu ================================================
// this function will simply print a menu
//===============================================================
void showMenu()
{
    cout << "A.)  Calculate the average of the test scores." << endl;
    cout << "B.)  Display all test scores" << endl;
}
//===== getChoice ===============================================
// this function will simply get user choice
//Input: char choice
//Output: users choice returned to main
//===============================================================
char getChoice(char choice)
{  
    cin >> choice;
    return choice;
}
//===== displayResults ==========================================
// this function will calculate the average value form the user 
// input.
// Input: an array testScores passed form main. 
//===============================================================
void displayResults(double testScores[])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += testScores[i];
    }
    cout << "The average is " <<  sum/SIZE << endl;
}