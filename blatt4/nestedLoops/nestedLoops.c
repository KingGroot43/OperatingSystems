#include <stdio.h>
#include "nestedLoops.h"


void calcProduct(const int const* dnum, int num)
{
    printf("%3i * %i =%3i\n", num, *dnum, num * *dnum);
    return (num < 10) ? calcProduct(dnum, ++num) : 1;
}

void printMultiplications() 
{
    int product;
    for(int dnum = 1, num = 1; dnum <= 10; ++dnum) {
        calcProduct(&dnum, num);
        printf("\n");
    }
}

