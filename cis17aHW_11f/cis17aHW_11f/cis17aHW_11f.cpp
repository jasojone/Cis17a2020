// Attached:
// ===============================================================
// File: 11f
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description:   This program will use a recursive function to 
// find all the vowles in a statement 
// ===============================================================
#include<iostream>
using namespace std;

bool isVowel(char c);
int  countVowel(char statementArr[]);
// ===== main ====================================================

// ===============================================================
int main()
{
    //Declare a c statementArring of size 20 initialized with null;
    char statement[20] = ""; 
    cout << "Enter a statement:\n\n";
    //gather input and assign it to cstatementArring array statement 
    cin.getline(statement, 20); 

    cout << endl << "There are " << countVowel(statement) 
        << " vowels in the statement." << endl;
    return 0;
}
//---------------------------------------------------------------------------
bool isVowel(char c) 
{
    // this will convert the lower case to upper
    c = toupper(c);   
    return(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
//--------------------------------------------------------------------------------
int  countVowel(char statementArr[])
{
    // loop variables 
    int i = 0;
    int count = 0;  
    //while statementArr not null run
    while (statementArr[i] != '\0')
    {
        //call the vowel checker
        if (isVowel(statementArr[i])) 
        {
            //counts vowles if true
            ++count;  
        }
        //moves thorugh the index
        i++; 
    }
    //return vowel count 
    return count;  
}