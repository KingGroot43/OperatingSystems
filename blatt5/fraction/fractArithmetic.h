typedef struct fract {
    int dividend;
    int divisor;
} Fraction;

int ggT(int a, int b);
void readFraction(Fraction *fraction);
void printFraction(Fraction *fraction);
Fraction* addFractions(Fraction *first, Fraction *second);
Fraction* multiplyFractions(Fraction *first, Fraction *second);
int compareFractions(Fraction *first, Fraction *second);
void test();