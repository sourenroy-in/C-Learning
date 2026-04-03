// Sum of Natural Numbers
#include <stdio.h>

int sumofnaturalnumbers(int num)
{
    if (num != 0)
        // adding natural numbers up to given number n
        return num + sumofnaturalnumbers(num - 1);
    else
        return num;
}

int main()
{

    int sum = 0;
    int n = 10;

    for (int i = 0; i <= n; i++) {
      
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}