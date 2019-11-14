#include <stdio.h>

void encryptText(const int *arrayLength, char input[], const int *move) { 
    for (int i = 0; i < *arrayLength && input[i] != 0; ++i) {
        if (input[i] != ' ')
            input[i] += *move;
    }
}

int main(void) {
    const int move = 3;
    const int arrayLength = 255;

    char input[arrayLength];

    printf("Please enter a word, that you want to be encrypted ...");
    fgets(input, 255, stdin);

    encryptText(&arrayLength, input, &move);
    
    printf("encrypted string: %s\n", input);

    return 0;
}