#pragma once
class queue
{
public:
	queue();
	void createNode();
	void insertData();
	void print();
	~queue();

private:

	typedef struct node
	{
		int data;
		node* next;
	}*ptr;

	ptr head, current;
};

