#include <stdio.h>

int overflow(int n) {
    static int S = 0;
    int sum = (S + n);
    int result = sum / 10;
    S = sum % 10;
    return result;
}

int main(void) {

    printf("%d\n", overflow(5));    // S = 5; return 0
    printf("%d\n", overflow(6));    // S = 1; return 1
    printf("%d\n", overflow(12));   // S = 3; return 1
    printf("%d\n", overflow(7));    // S = 0; return 1
    printf("%d\n", overflow(2));    // S = 2; return 0

    return 0;
}