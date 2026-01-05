#include <stdio.h>

int sum_natural_num(int);

int sum_natural_num(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return sum_natural_num(n - 1) + n;
}

int main()
{

    printf("The Sum of the first 5 natural Numbers is %d ", sum_natural_num(5));

    return 0;
}