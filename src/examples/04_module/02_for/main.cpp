#include"for.h"
#include <iostream>
using std::cout, std::cin;

int main() 
{
	int choice;
	cout<<"1-Display Numbers\n";
	cout<<"2-Sum numbers \n";
	cout<<"Enter a number: ";
	cin>>choice;

	int num;
	cout<<"Enter a number for the fraction: ";
	cin>>num;

	if (choice == 1)
	{
		display_numbers(num);
	}
	else
	{
		int result = sum_of_number(num);

		cout<<result;
	}

	return 0;
}