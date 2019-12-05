#include <stdio.h>
#include "caesar.h"

void encryptText(const int *arrayLength, char input[], const int *move) 
{ 
    for (int i = 0; i < *arrayLength && input[i] != 0; ++i) {
        if (input[i] != ' ')
            input[i] += *move;
    }
}

void getInput(char* input, const int const* arrayLength)
{
    printf("Please enter a word, that you want to be encrypted: ");
    fgets(input, *arrayLength, stdin);
}

