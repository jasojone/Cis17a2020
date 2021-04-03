// Attached: 
// ===============================================================
// File: 
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: this simple program will use list from the stl 
// and the itereator and reverse_iterator function to compair 
// the first and last letters of a word then itereate up one
// form the beginning the up one from the end. the word will 
// be entered by the user to determin is it is a palendrome.      
// ===============================================================
#include <iostream>
#include <string>
#include <list>

using namespace std;

string getUserInput();
void pushToList(list<char>& characters, string word);
void palendromChecker(list<char>& characters, string word);

// ===== main ====================================================

// ===============================================================
int main()
{
	list<char> characters;
	string word;
	char runAgain = 'y';
	

	while (runAgain == 'y' || runAgain == 'Y')
	{
		word = getUserInput();
		pushToList(characters, word);
		palendromChecker(characters, word);

		//Ask if they want to run again
		cout << "\nRun again? (y/n)";
		cin >> runAgain;
		cout << endl;
		cin.ignore();
		characters.clear();
	}
	return 0;
}
// ===============================================================

string getUserInput()
{
	string word;
	// get user input and initillaize it to word. 
	cout << "Enter a word :" << endl;
	getline(cin, word);
	return word;
}

void pushToList(list<char>& characters, string word)
{
	// push the word onto the list. 
	for (int i = 0; word[i] != '\0'; i++)
	{
		characters.push_back(word[i]);
	}
}

void  palendromChecker(list<char>& characters, string word)
{
	bool palendrome = true;
	// create the iterators. 
	list<char>::iterator itr;
	list<char>::reverse_iterator ritr;

	// the for loop will use the itr starting at the beginning and ritr starting at the end. 
	// then use an if to check if the letters match, if so it will add one to each itr and ritr. 
	// if the latters do not match then the for loop will output, not a palendrom and break 
	for (itr = characters.begin(), ritr = characters.rbegin(); itr != characters.end(); ++itr, ++ritr)
	{
		if (*itr != *ritr)
		{
			cout << word << " is not a palendrome" << endl;
			palendrome = false;
			break;
		}
	}

	// if palendrom is true output, is a palendrome
	if (palendrome)
	{
		cout << word << " is a palendrome" << endl;
	}
}
