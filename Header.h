
#include<iostream>
#include<string>
using namespace std;
struct node {
	string name, number;
	node* next;
};
class Contact {
private:
	node* head;
public:
	Contact();
	void addContact(string,string);
	void removeContact(string);
	void display();
	void search(string);
	void search_by_num(string);
};