#include <stdio.h>

int fib(int n)
{
    if (0 == n) return 0;
    if (1 == n) return 1;
          
    return fib(n-1) + fib(n-2);   

}

void main()
{
    int n;
    printf("Ihre Zahl: ");
    scanf("%d", &n);
    
    printf("Fibonacci Sum: %d\n",fib(n));
}