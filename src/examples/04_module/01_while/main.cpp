#include "while.h"
#include <iostream>

using std::cout; 	using std::cin;

int main() 
{
	char choice = 'y';

	while (choice == 'y' || choice == 'Y') 
	{

		cout<<"Enter y again to continue, any other character to exit. ";
		cin>>choice;
	}
	return 0;
}