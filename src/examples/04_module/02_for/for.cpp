#include "for.h"
#include<iostream>

//Write code for function display_numbers that accepts a number and 
//displays every number that precedes(starting from 1) it in a line
//Example: display_numbers(5)
/*
RESULT:

1
2
3
4
5

*/
void display_numbers(int num)
{
    for(int i = 0; i < num; i++)
    {
        std::cout<<"i= "<<i<<" i + 1 = "<<i+1<<"\n";
    }
}



int sum_of_number(int num)
{
    int sum = 0;
    
    for(int i = 0; i <= num; i++)
        {
            sum += i*2;
        }

    return sum;

}
