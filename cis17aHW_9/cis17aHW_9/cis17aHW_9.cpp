// Attached: cis17aHW_9 and 9f
// ===============================================================
// File: cis17aHW_9
// ===============================================================
// Programmer: Jason Jones
// Class: CIS 17A 
// Instructor: Dennis Rainey
//
// Description: This program will demonstrate the use of a linked list
// of structs data type and its basic functionalities add, remove and 
// display the nodes. This example is using the methods that 
// Mr. Rainey taught us in the lecture( lead follow for deletion). 
// ===============================================================
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// ===== struct Box ==============================================

// ===============================================================
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
void insertRecord(BoxPtr& head);
void displayRecords(BoxPtr& head);
void deleteEntry(BoxPtr& head);
// ===== main ====================================================

// ===============================================================
int main()
{
	char answer = 'Y';
	BoxPtr head = nullptr;

	while (toupper(answer) == 'Y')
	{
		insertRecord(head);

		cout << "Enter another Box record (Y or N)?   \n\n";
		cin >> answer;
	}
	system("cls");

	cout << "\n\nHere is the list of Box records:\n";
	displayRecords(head);

	if (head == nullptr)
	{
		cout << "The list is empty.\n\n";
	}
	else
	{
		cout << "Delete a Box record (Y or N)?  ";
		cin >> answer;

		if (toupper(answer) == 'Y')
		{
			deleteEntry(head);
		}
	}
	cout << "\n\nHere is the list of Box records after the deletion :\n";
	displayRecords(head);

	return 0;
}

// ==== insertRecord function ==================================

void insertRecord(BoxPtr& head)
{
	// creates a new Student object on the heap and its address is assigned to temp
	BoxPtr temp = new Box;

	cout << "Enter the ID:  ";
	cin >> temp->id;
	cin.ignore();
	cout << setw(10) << "Width:  ";
	cin >> temp->width;
	cout << setw(10) << "Height:  ";
	cin >> temp->height;
	cout << setw(10) << "Length:  ";
	cin >> temp->lenght;
	cout << endl;

	temp->next = head;	// connect the new node to the previous node
	head = temp;		// head now points to the head of the list

}
// =============================================================

// ==== displayRecords function ================================
void displayRecords(BoxPtr& head)
{
	BoxPtr temp = head;
	cout << fixed << showpoint << setprecision(2);
	cout << setw(6) << "ID#:" << setw(10) << "Width:"
		<< setw(10) << "Height:" << setw(10) << "Length:" << setw(10) << endl
		<< "-------------------------------------" << endl;
	while (temp != nullptr)
	{
		cout << setw(6) << temp->id << setw(10) << temp->width
			<< setw(10) << temp->height << setw(10) << temp->lenght << endl;

		temp = temp->next;
	}

}
// =============================================================

// ==== deleteEntry function ===================================
void deleteEntry(BoxPtr& head)
{
	BoxPtr lead = head;
	BoxPtr follow = head;

	int idNum;

	cout << "Enter the ID:  ";
	cin >> idNum;
	// checks the nodes one by one untill the lead reaches the nullptr or hit the id
	while (lead->next != nullptr && lead->id != idNum)
	{
		// lead and follow start at the first node, lead then moves onto the next node via the next ptr member
		follow = lead;
		lead = lead->next;
	}
	// Check to see if it's the first node
	if (lead == head)
	{
		head = head->next;	// move head to the next one
		delete lead;		// delete does not delete the pointer.  It deletes the object the pointer points to;
	}
	// check to see if lead points to the last node
	else if (lead->next == nullptr)
	{
		// this will delte the node if it contains the correct id
		if (lead->id == idNum)
		{
			follow->next = lead->next;
			delete lead;
		}
		else
		{
			// otherwise the id is not in the lsit
			cout << idNum << "  is not in the list. \n";
			system("pause");
		}
	}
	// if its not the first or last then 
	else
	{
		follow->next = lead->next;
		delete lead;
	}
}
// ===============================================================


