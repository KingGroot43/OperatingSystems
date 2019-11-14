#include <stdio.h>

void printMultiplications() {
    int product;
    for(int dnum = 1; dnum <= 10; ++dnum) {
        for(int num = 1; num <= 10; ++num) {
            product = num * dnum;
            printf("%3i * %i =%3i\n", num, dnum, product);
        }
        printf("\n");
    }
}

int main(void) {
    printMultiplications();
}