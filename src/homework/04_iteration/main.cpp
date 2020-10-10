//write include statements
#include <string>
#include <iostream>
#include "dna.h"
//write using statements
using std::string; using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice = 0;
	char input = 'Y';
	string dna = "";
	do
	{
		cout<<"Enter 1 to get DNA GC content, or 2 for Get DNA Complement\n";
		cin>>choice;
		if(choice == 1)
		{
			cout<<"Enter DNA string: ";
			cin>>dna;
		
			double result = get_gc_content(dna) * 100;
			cout<<"The GC content for "<<dna<< " is "<<result<<"%\n";
		}
		if(choice == 2)
		{
			cout<<"Enter DNA string: ";
			cin>>dna;

			string compliment = get_dna_complement(dna);

			cout<<"The DNA compliment for "<<dna<< " is " <<compliment<<"\n";
		}
		
		cout<<"Would you like to input another DNA sequence?\n";
		cout<<"Type Y or y to input another sequence, type any other letter to exit\n";
		cin>>input;


	}while(input == 'Y' || input == 'y');

	return 0;
}