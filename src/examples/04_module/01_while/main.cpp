#include "while.h"
#include <iostream>

using std::cout; 	using std::cin;

int main() 
{
	char choice = 'y';

	while (choice == 'y' || choice == 'Y') 
	{
		int value;
		cout<< "Enter a number: ";
		cin>>value;

		int result = sum_of_squares(value);
		cout<<"Result is: "<<result<<"\n";

		cout<<"Enter y again to continue, any other character to exit. ";
		cin>>choice;
	}
	return 0;
}