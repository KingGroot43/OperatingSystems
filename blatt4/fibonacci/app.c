#include <stdio.h>
#include "fibonacci.h"

void main()
{
    int n;
    printf("Ihre Zahl: ");
    scanf("%d", &n); 
    printf("Fibonacci Sum: %d\n",fib(n));
}