#include "pch.h"
#include <iostream>
#include <cstdlib>
#include "queue.h"

using namespace std;

queue::queue()//constructor
{
	head = NULL;
	current = NULL;
}

void queue::createNode()//creates each individual node and links them like a queue
{
	ptr newNode = new node;
	newNode->next = NULL;

	if (head == NULL)
		head = newNode;
	else
		current->next = newNode;
	current = newNode;
}

void queue::insertData()//insert the value into each individual node (the list)
{
	createNode();

	cout << "\n\nvalue : ";
	cin >> current->data;
}

void queue::print()//prints the list
{
	int i = 1;
	ptr show;

	show = head;
	cout << endl;

	while (show != NULL)
	{
		cout << "[" << i++ << "] = {" << show->data<< "}" << endl;
		show = show->next;
	}
}
queue::~queue()//deconstructor
{

}