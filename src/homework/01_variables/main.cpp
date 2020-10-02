//write include statements
#include <iostream>
#include "variables.h"

//write namespace using statement for cout
using std::cout, std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total = 0;
	cout<<"Enter the cost of your meal: $"; //prompt user for a number
	cin>>meal_amount; //assign number to meal_amount
	tax_amount = get_sales_tax_amount(meal_amount); //calculate tax
	cout<<"\n";
	cout<<"Enter the tip rate: "; //prompt user for another number
	cin>>tip_rate; //assign number to tip rate
	tip_amount = get_tip_amount(meal_amount, tip_rate); //calculate tip amount
	cout<<"\n";
	total = tip_amount + tax_amount + meal_amount;
	cout<<"Meal Amount: $"<< meal_amount <<"\nSales Tax: $"<< tax_amount <<"\nTip Amount: $"<< tip_amount << "\n Total: $"<< total;

	return 0;
}
