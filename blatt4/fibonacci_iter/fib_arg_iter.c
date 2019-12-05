#include <stdio.h>
#include "fib_arg_iter.h"

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