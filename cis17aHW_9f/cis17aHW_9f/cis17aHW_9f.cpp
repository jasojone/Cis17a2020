// Attached: 
// ===============================================================
// File: 
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This program will demonstrate the basic functionality
// of a linked list: add, remove and display. In this example I tryed to 
// use a different method of re writing the linked list and deleting the
// prior one after removing the node. This program also continues to run 
// until user specifies otherwise.
// ===============================================================
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Box
{
	int id;
	double width;
	double height;
	double lenght;

	Box* next;
};


// creating a new name or masking the name for box* 
typedef Box* BoxPtr;

// function declerations
bool insertRecord(BoxPtr& head);
void displayRecords(const BoxPtr head);
BoxPtr deleteEntry(const BoxPtr head, int deletedId);
// ===== main ====================================================

// ===============================================================
int main()
{
	char answer;
	int deletedId;

	BoxPtr head = nullptr;
	// run loop
	do {
		system("cls");

		cout << "Enter a Box record (-1 to quit):  \n\n";
		bool doAgain = true;
		
		// unser entry loop
		do {
			doAgain = insertRecord(head);
		} while (doAgain == true);

		cout << "Display all records Y/N?  " << endl;;
		cin >> answer;
		if (toupper(answer) == 'Y')
			displayRecords(head);

		cout << "Enter the ID to be deleted:  ";
		cin >> deletedId;
		head = deleteEntry(head, deletedId);

		cout << "Display all records Y/N?  " << endl;
		cin >> answer;
		if (toupper(answer) == 'Y')
			displayRecords(head);

		cout << "Do again Y/N?  ";
		cin >> answer;

	} while (toupper(answer) == 'Y');
	return 0;
}

// ==== insertRecord function ==================================
// 
bool insertRecord(BoxPtr& head)
{
	BoxPtr temp= new Box();
	bool doAgain = true;
	int idNum = 0;

	cout << setw(10) << "Box ID:  ";
	cin >> idNum;
	
	// stop loop and end insertion 
	if (idNum == -1)
		doAgain = false;

	// creates the new node in the list
	else
	{
		temp->id = idNum;
		cin.ignore();
		cout << setw(10) << "Width:  ";
		cin >> temp->width;

		cout << setw(10) << "Height:  ";
		cin >> temp->height;

		cout << setw(10) << "Length:  ";
		cin >> temp->lenght;

		cout << endl;

		doAgain = true;

		temp->next = head;

		head = temp;
	}
	return doAgain;
}
// =============================================================



// ==== displayRecords function ================================
void displayRecords(const BoxPtr head)
{
	system("cls");

	// if head is pointing to null the list is empty
	if (head == nullptr)
	{
		cout << "List is empty.\n";
		return;
	}
	BoxPtr temp= head;

	cout << fixed << showpoint << setprecision(2);
	cout << setw(6) << "ID#:" << setw(10) << "Width:"
		<< setw(10) << "Height:" << setw(10) << "Length:" << setw(10) << endl
		<< "-------------------------------------" << endl;

	while (temp!= nullptr)
	{

		cout << setw(6) << temp->id << setw(10) << temp->width
			<< setw(10) << temp->height << setw(10) << temp->lenght << endl;

		temp= temp->next;
	}
}
// =============================================================



// ==== deleteEntry function ===================================
// there will be a new list created once the id is found. 
BoxPtr deleteEntry(const BoxPtr head, int deletedId)
{
	BoxPtr tempCurrent = head;
	BoxPtr tempLead = head->next;
	BoxPtr newList = tempCurrent;

	// base case find the id skip over it and write a new list
	if (head->id == deletedId)
	{
		tempCurrent= head->next;
		tempLead = head->next->next;
		newList = tempCurrent;
		// deletes old list by deleting the head 
		delete head;
	}
	
	// if it does not find the id
	while (tempCurrent!= nullptr)
	{
		if (tempLead != nullptr && tempLead->id == deletedId)
		{
			tempCurrent->next = tempLead->next;
			tempLead = tempLead->next;
		}

		tempCurrent = tempCurrent->next;
		if (tempLead != nullptr)
			tempLead = tempLead->next;
	}

	return newList;
}