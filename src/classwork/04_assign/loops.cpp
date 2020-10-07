//cpp
#include "loops.h"
#include <iostream>
//factoral function code
int factoral(int parameter)
{
    int total = parameter, count = 1;
    while(count < parameter)
    {
        total = total * count;
        count++;
    }
    return total;
}