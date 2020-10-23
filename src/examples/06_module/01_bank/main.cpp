#include "bank_account.h"
#include <iostream>

using std::cout;

int main()
{
	//there's another class that retrieves the balance from a database

	BankAccount account(100);//create a variable of the class
	cout<<"Balance: "<<account.get_balance();//using a public class function

	BankAccount new_account;
	new_account.deposit(25);
	cout<<"New Account Balance: "<<new_account.get_balance();//using a public class function



	return 0;
}