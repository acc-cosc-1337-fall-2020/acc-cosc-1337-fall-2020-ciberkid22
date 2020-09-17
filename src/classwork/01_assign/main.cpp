//Write the include statement for types.h here
#include "types.h"

//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>

int main() 
{
	int num;
	std::cout << "Enter a number: "; //Ask the user for a number
	std::cin >> num; //Assign number to variable num

	int result;
	result = multiply_numbers(num);	// Insert variable num in multiply_numbers variable
	std::cout << "Result: " << num << " times 5 equals " << result; //display result

	std::cout << "\n"; //newline

	int num1 = 4; //assign 4 to variable num1
	result = multiply_numbers(num1); //insert variable num1 in multiply_numbers variable
	std::cout << num1 << " times 5 equals " << result; //display result

	return 0;
	//Homework 
}

