#include"Header.h"
Contact::Contact() {
	head = NULL;
}
void Contact::addContact(string nam, string num) {
	//create node
	node* newNode = new node;
	newNode->name = nam;
	newNode->number = num;
	newNode->next = NULL;
	/////
	if (head == NULL)//if list is empty
	{
		head = newNode;//head points to the first node
	}
	else//if it is not
	{
		node* temp;
		temp = head;
		while (temp->next != NULL)//to check if you reached the last element
		{
			temp = temp->next;
		}
		temp->next = newNode;//next of the last node points to the newNode
	}

}
void Contact::removeContact(string nam) {
	if (head == NULL)
	{
		cout << "\nthe list is empty\n";
	}
	else {
		node* prev, * temp;
		prev = temp = head;
		if (temp->name == nam)//if it is the first node
		{
			head = temp->next;//to keep the head at the top of the list
			delete temp;
			cout << "\nthe contact is deleted\n";
		}
		else//if it is not the first node 
		{
			while (temp != NULL && temp->name != nam)//to search for the contact
			{
				prev = temp;
				temp = temp->next;
			}
			if (temp == NULL)//if the contact is not found
			{
				cout << "\nthere is no contact by that name\n";
			}
			else//if the contact is found
			{
				prev->next = temp->next;
				delete temp;
			}

		}
	}

}
void Contact::display()
{
	node* temp;
	temp = head;
	while (temp != NULL)
	{
		cout << "name : " << temp->name << endl << "number : " << temp->number << endl;
		temp = temp->next;
		cout << "\n\n";
	}
}
void Contact::search(string nam)
{
	if (head == NULL)
	{
		cout << "the contact list is empty";
	}
	else
	{
		node* temp = head;
		if (temp->name == nam)
		{
			cout << "\nnumber : " << temp->number<<"\n";
		}
		else
		{
			while (temp != NULL && temp->name != nam)//to search for the name
			{
				temp = temp->next;
			}
			if (temp == NULL)//the name is not found
			{
				cout << "\nthere is no contact by this name\n";
			}
			else//if it was found
			{
				cout << " number : " << temp->number;
			}
		}
	}
}
void Contact::search_by_num(string num)
{
	if (head == NULL)
	{
		cout << "\n the contact list is empty\n";
	}
	else
	{
		node* temp = head;
		while (temp != NULL && temp->number != num)
		{
			temp = temp->next;
		}
		if (temp == NULL)
		{
			cout << "their is no contact for this number";
		}
		else
		{
			cout << "name : " << temp->name;
		}
	}
}