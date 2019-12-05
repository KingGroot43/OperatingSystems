#include <stdio.h>
#include "staticVar.h"

void printValues(int value)
{
    printf("%d\n", value);
}

int overflow(int n) 
{
    static int S = 0;
    int sum = (S + n);
    int result = sum / 10;
    S = sum % 10;
    return result;
}