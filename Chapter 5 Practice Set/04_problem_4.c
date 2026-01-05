#include <stdio.h>

int fib(int);

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);

    printf("The Fibonacci Series is %d is %d ", n, fib(n));

    return 0;
}