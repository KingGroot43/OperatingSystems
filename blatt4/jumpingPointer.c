#include <stdio.h>

int jumpArray(int A[], const int *arrayLength) {
    int count = 0;
    int k = 0;
    int besucht[*arrayLength];
    for(int i = 0; i < *arrayLength; i++)
        besucht[i] = 0;

    do {
        besucht[k] = 1;
        k = k + A[k];
        count++;
        if(besucht[k] == 1) return -1;
        if(k < 0 || k >= *arrayLength) return count;
    } while(1);

    return count;
}


int main(void) {
    const int arrayLength = 5;
    //array mit int werten, das den jumping punkt definiert
    int A[] = {2, 3, -1, 2, -1};
    int B[] = {2, 3, -1, 2, -2};
    //jumping pointer heißt k und mit 0 initialisiert
    //Wert A bei Index k ist relative Sprungdistanz
    //k ist Basiswert

    printf("result %i\n", jumpArray(A,&arrayLength));
    printf("result %i\n", jumpArray(B,&arrayLength));


}

