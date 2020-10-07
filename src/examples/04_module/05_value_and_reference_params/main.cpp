#include<iostream>

using std::cout;

int main() 
{
	int num = 5;

	cout<<"Value of num "<<num<<"\n";
	cout<<"Address of num "<<&num<<"\n";

	int& num_ref = num;
	cout<<"Value of num_ref "<<num_ref<<"\n";
	cout<<"Address of num_ref "<<&num_ref<<"\n";

	return 0;
}