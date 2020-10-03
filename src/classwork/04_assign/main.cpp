//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cin;  using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	char choice;
	do
	{
		int num;
		cout<<"Enter a number between 1 and 10 to find its factoral: ";
		cin>>num;

		if(num >= 1 && num <= 10)
		{
			cout<<"The factoral for "<<num<<" is "<<factoral(num)<<"\n";
			cout<<"Would you like to continue? Type any key, or type 'n' to exit: ";
			cin>>choice;
			
		}
		else
		{
			cout<<"Error: Number out of range\n";
		}
		

	}while(choice !='n');

	return 0;
}