#include <iostream>
#include <cstdlib>
#include "Heap.h"
using namespace std;


int main() {
	Heap<int> h1;
	Heap<int> h2;
	
	h1 += 3;
	h2 += 2;
	bool b = h1 == h2;
	cout << b << endl;
	
	while (1)
	{
		cout << endl;
		cout<<"------------------"<<endl;
		cout<<"Operations on Heap"<<endl;
		cout<<"------------------"<<endl;
		cout<<"1.Insert Element"<<endl;
		cout<<"2.Delete Minimum Element"<<endl;
		cout<<"3.Extract Minimum Element"<<endl;
		cout<<"4.Print Heap"<<endl;
		cout<<"5.Exit"<<endl;
		int choice;
		double element;
		cout<<"Enter your choice: " << endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter the element to be inserted: ";
				cin>>element;
				h1 += element;
				break;
			case 2:
				h1 -= 0;
				break;
			case 3:
				cout<< "Minimum Element: ";
				if (h1.extractMin() == -1)
				{
					cout<< "Heap is Empty"<<endl;
				}
				else
					cout<< "Minimum Element:  "<< h1.extractMin() <<endl;
				break;
			case 4:
				cout<<"Displaying elements of Hwap:  ";
				h1.displayHeap();
				break;
			case 5:
				exit(1);
			default:
				cout<<"Enter Correct Choice"<<endl;
		}
	}
	return 0;
}
