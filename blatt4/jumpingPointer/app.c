#include <stdio.h>
#include "jumpingPointer.h"

int main(void) 
{
    const int arrayLength = 5;
    //array mit int werten, das den jumping punkt definiert
    int A[] = {2, 3, -1, 2, -1};
    int B[] = {2, 3, -1, 2, -2};
    //jumping pointer heißt k und mit 0 initialisiert
    //Wert A bei Index k ist relative Sprungdistanz
    //k ist Basiswert

    printf("Result: %i\n", jumpArray(A, &arrayLength));
    printf("Result: %i\n", jumpArray(B, &arrayLength));


}