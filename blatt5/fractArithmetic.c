#include <stdio.h>

typedef struct fract {
    int dividend;
    int divisor;
} Fraction;

int ggT(int a, int b) {
    if (a == 0) {
        return b;
    }
    while (b != 0) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

void readFraction(Fraction *fraction) {
    printf("Dividend of your fraction: ");
    scanf("%i", &fraction->dividend);
    printf("Divisor of your fraction: ");
    scanf("%d", &fraction->divisor);
}

void printFraction(Fraction *fraction) {
    printf("%i / %i\n", fraction->dividend, fraction->divisor);
}

Fraction* addFractions(Fraction *first, Fraction *second) {
    Fraction *sum;
    sum->dividend = first->dividend * second->divisor + second->dividend * first->divisor;

    sum->divisor = first->divisor * second->divisor;

    return sum;
}

Fraction* multiplyFractions(Fraction *first, Fraction *second) {
    Fraction *product;
    product->dividend = first->dividend * second->dividend;
    product->divisor = first->divisor * second->divisor;

    int sDiv = ggT(product->dividend, product->divisor);
    product->dividend = product->dividend / sDiv;
    product->divisor = product->divisor / sDiv;

    return product;

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
    
    printf("%i, %i, %i, %i\n",first.dividend,first.divisor,second.dividend,second.divisor);

    Fraction *product = multiplyFractions(&first,&second);
    printFraction(product);
    //printf("Compare %i: ", compareFractions(&first,&second));
}


int main(void) {
    test();

}