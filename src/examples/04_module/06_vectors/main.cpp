#include "vec.h"
#include <iostream>
#include <vector>

using std::vector;    using std::cout;

int main() 
{
	vector<int> nums {10, 3, 2};
	
	cout<<"Capacity: "<<nums.capacity()<<"\n";
	nums.push_back(20);
	cout<<"Capacity: "<<nums.capacity()<<"\n";

	cout<<nums[3]<<"\n";
	return 0;
}