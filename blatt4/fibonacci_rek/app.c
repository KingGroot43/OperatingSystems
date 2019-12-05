#include <stdio.h>
#include <stdlib.h>
#include "fib_arg_rek.h"

void main(int argc, char *argv[])
{
    if (argc == 2) {
        printf("Fibonacci Sum: %d\n",fib(atoi(argv[1])));
    } else {
        printf("Not enougth arguments!\n");
    }
}