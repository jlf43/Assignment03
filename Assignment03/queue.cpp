// Jaeni Lee
// Assignment 03

#include <iostream>
#include <queue>
#include "QUEUE.H";
using namespace std;


int main()
{
	queue<string> customers;
	cout << "Welcome to the QUEUE!" << endl;
	cout << "Here are your choices:" << endl;
	int NUM_OPTION = 5;
	string options[] = {"push", "front", "pop", "move_to_rear", "quit"};
	cout << endl;

	int option = 0;
	string name;

	while (option < NUM_OPTION)
	{
		for (int i = 0; i < NUM_OPTION; i++)
		{
			cout << i + 1 << ": " << options[i] << endl;
		}
		cout << endl;
		cout << "Please select an option number: ";
		cin >> option;

		switch (option)
		{
			case 1:   // This allow the user to enter the name of the customer that wanted to be in the queue
			{
				cout << "Enter a new customer name: ";
				cin >> name;
				customers.push(name);
				cout << endl;
				break;
			}
			case 2:   // This displays who is the first one in line
			{
				cout << "Customer " << customers.front() << " is next in line" << endl; 
				cout << endl;
				break;
			}
			case 3:   // This removes or kicks out the first customer from the queue
			{
				cout << "Customer " << customers.front() << " is removed from the line" << endl;
				cout << endl;
				customers.pop();
				break;
			}
			case 4:    // this moves the first customer to the back of the line
			{
				cout << "Customer " << customers.front() << " is being moved to the end of the line" << endl;
				cout << endl;
				move_to_rear(customers);
				break;
			}
			case 5:    // This allows the user to leave the queue program
			{
				cout << "Leaving the queue . . ." << endl;
				break;
			}
			default:   // Will terminate if the user enters a number that is not part of the option choices
			{
				cout << "Invalid selection . . .";
				cout << endl;
				break;
			}
		}

	}
	

	


}