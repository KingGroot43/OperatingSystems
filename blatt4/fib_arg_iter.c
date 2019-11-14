#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    int a = 1;
    int b = 0;
    int tmp = 0;
    int sum = 0;
    while (n > 0) {
        tmp = a;
        a += b;
        b = tmp;
        --n;
    }
    return tmp;
}

void main(int argc, char *argv[])
{
    if (argc == 2) {
        printf("Fibonacci Sum: %d\n",fib(atoi(argv[1])));
    } else {
        printf("Not enougth arguments!\n");
    }
}