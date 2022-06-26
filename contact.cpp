// contact.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"Header.h"
#include <iostream>
#include<string>
using namespace std;

int main()
{
	system("color 0c");
	Contact cont;
	int choice;
	string na, nu;
	for (;;) {
		cout << "\n\n 1. add contact\n 2. delete contact\n 3. search for contact by name\n 4. display all\n 5. search for contact by number\n\n-> ";
		cin >> choice;
		cout << endl << endl;
		switch (choice)
		{
		case 1:
			cout << "name : ";
			cin >> na;
			cout << "number : ";
			cin >> nu;
			cont.addContact(na, nu);
			break;
		case 2:
			cout << "name : ";
			cin >> na;
			cont.removeContact(na);
			break;
		case 3:
			cout << "name : ";
			cin >> na;
			cont.search(na);
			break;
		case 4:
			cont.display();
			break;
		case 5:
			cout << "number : ";
			cin >> nu;
			cont.search_by_num(nu);
		}


	}
	}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
