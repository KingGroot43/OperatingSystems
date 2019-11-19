#include <stdio.h>
#include "permutCheck.h"

int main(void) 
{
    char* a = {"hello"};
    char* b = {"lehol"};
    char* c = {"lehho"};
    char* d = {"horst"};

    printf("%i \n", isPermutation(a, b));
    printf("%i \n", isPermutation(a, c));
    printf("%i \n", isPermutation(a, d));

    return 0;
}