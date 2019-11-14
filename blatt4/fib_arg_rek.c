#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if (0 == n) return 0;
    if (1 == n) return 1;    
    return fib(n-1) + fib(n-2);   
}

void main(int argc, char *argv[])
{
    if (argc == 2) {
        printf("Fibonacci Sum: %d\n",fib(atoi(argv[1])));
    } else {
        printf("Not enougth arguments!\n");
    }
}