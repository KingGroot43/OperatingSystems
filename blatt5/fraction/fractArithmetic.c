#include <stdio.h>
#include "fractArithmetic.h"

int ggT(int a, int b) {
    if (a == 0) return b;
    while (b != 0) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

void readFraction(Fraction *fraction) {
    printf("Dividend of your fraction: ");
    scanf("%i", &fraction->dividend);
    printf("Divisor of your fraction: ");
    scanf("%i", &fraction->divisor);
}

void printFraction(Fraction *fraction) {
    printf("%i / %i\n", fraction->dividend, fraction->divisor);
}

Fraction* addFractions(Fraction *first, Fraction *second) {
    Fraction sum;
    sum.dividend = first->dividend * second->divisor + second->dividend * first->divisor;
    sum.divisor = first->divisor * second->divisor;
    int sDiv = ggT(sum.dividend, sum.divisor);
    sum.dividend = sum.dividend / sDiv;
    sum.divisor = sum.divisor / sDiv;
    Fraction *sumPointer = &sum;
    return sumPointer;
}

Fraction* multiplyFractions(Fraction *first, Fraction *second) {
    Fraction product;
    product.dividend = first->dividend * second->dividend;
    product.divisor = first->divisor * second->divisor;
    int sDiv = ggT(product.dividend, product.divisor);
    product.dividend = product.dividend / sDiv;
    product.divisor = product.divisor / sDiv;
    Fraction *prodPointer = &product;
    return prodPointer;

}

int compareFractions(Fraction *first, Fraction *second) {
    return (first->dividend == second->dividend) && (first->divisor == second->divisor);
}

void test() {
    Fraction first;
    Fraction second;

    readFraction(&first);
    readFraction(&second);

    Fraction *sum = addFractions(&first,&second);
    printFraction(sum);

    Fraction *product = multiplyFractions(&first,&second);
    printFraction(product);
    //printf("Compare %i: ", compareFractions(&first,&second));
}


