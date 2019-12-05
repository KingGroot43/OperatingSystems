#include <stdio.h>
#include "staticVar.h"

int main(void)
{
    printValues( overflow(5) );  // S = 5; return 0   
    printValues( overflow(6) );    // S = 1; return 1
    printValues( overflow(12) );   // S = 3; return 1
    printValues( overflow(7) );    // S = 0; return 1
    printValues( overflow(2) );    // S = 2; return 0

    return 0;
}