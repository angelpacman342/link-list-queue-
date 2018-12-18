#include "pch.h"
#include <iostream>
#include <cstdlib>
#include "queue.h"

using namespace std;

int main()
{
	int pick;
	char con;
	queue list;

	do
	{
		system("cls");
		cout << "Link List that behaves as a queue";

		list.insertData();
		list.print();

		do
		{
			cout << "\n\nAdd more? {y,n} : ";
			cin >> con;
		} while ((con != 'y') && (con != 'Y') && (con != 'N') && (con != 'n'));
	} while (con == 'y' || con == 'Y');
}