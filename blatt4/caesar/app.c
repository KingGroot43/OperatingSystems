#include <stdio.h>
#include "caesar.h"

int main(void) 
{
    const int move = 3;
    const int arrayLength = 255;

    char input[arrayLength];

    getInput(input, &arrayLength);
    encryptText(&arrayLength, input, &move);
    
    printf("encrypted string: %s\n", input);

    return 0;
}