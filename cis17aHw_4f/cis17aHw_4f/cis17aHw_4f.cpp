// Attached: 
// ===============================================================
// File: 
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description:
//
//
//
//      
// ===============================================================
#include <iostream>
#include <string>
#include <iomanip>
#include "box.h"

using namespace std;

typedef Box* ptrType;


bool insertRecord(ptrType& head);
void displayRecords(const ptrType head);
void idDeleter(ptrType& head, int);
// ===== main ====================================================

// ===============================================================
int main()
{
	char userInput;
	int removeId = 0;

	do {
		system("cls");

		ptrType head = NULL;

		cout << "Enter box ID number and box dimensions (-1 to quit): \n\n";
		bool doAgain = true;

		do {
			doAgain = insertRecord(head);
		} while (doAgain == true);

		cout << "Display all records Y/N?  ";
		cin >> userInput;
		if (toupper(userInput) == 'Y')
			displayRecords(head);

		cout << "Emter the ID of the box to be deleted: ";
		cin >> removeId;
		idDeleter(removeId);

		cout << "Do again Y/N?  ";
		cin >> userInput;
	} while (toupper(userInput) == 'Y');
	return 0;
}
// ===============================================================

// ==== insertRecord function ====================================
bool insertRecord(ptrType& head)
{
	ptrType temp = new(Box);
	bool doAgain = true;
	int idNum = 0;

	cout << setw(10) << "ID:  ";
	cin >> idNum;

	if (idNum == -1)
		doAgain = false;

	else
	{
		temp->id = idNum;
		cin.ignore();
		cout << setw(10) << "Width:  ";
		cin >> temp->width, 30;

		cout << setw(10) << "Height:  ";
		cin >> temp->height, 30;

		cout << setw(10) << "Length:  ";
		cin >> temp->lenght, 30;

		cout << endl;

		doAgain = true;

		temp->next = head;

		head = temp;
	}
	return doAgain;
}
// ===============================================================

// ==== idDeleter function =======================================
void idDeleter(ptrType& head, int removeId)
{
	ListNode *ptrType;
	ListNode* previousNode;
	
	if (head->boxId == removeId)
	{
		ptrType = head->next;
		delete head;
		head = ptrType;
	}
	else
	{
		ptrType = head;
		while (ptrType != NULL && ptrType->boxId != removeId)
		{
			previousNode = ptrType;
			ptrType = ptrType->next;
		}
		if (ptrType)
		{
			previousNode->next = ptrType->next;
			delete ptrType;
		}

	}

}
// ===============================================================

// ==== displayRecords function ==================================
void displayRecords(const ptrType head)
{
	system("cls");
	if (head == NULL)
	{
		cout << "List is empty.\n";
		return;
	}
	ptrType temp = head;

	cout << "ID#\t Width\t" << endl;
	cout << "-----------------" << endl;

	while (temp != NULL)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << setw(5) << "ID#:" << setw(10) << temp->id;
		cout << setw(5) << "Width:" << setw(10) << temp->width;
		cout << setw(5) << "Height:" << setw(10) << temp->height;
		cout << setw(5) << "Length:" << setw(10) << temp->lenght;
		cout << endl;
		temp = temp->next;
	}
}