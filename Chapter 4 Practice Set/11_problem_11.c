#include <stdio.h>

int main()
{
    int n = 70;
    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }

    else
    {
        int i = 2;
        while( i < n)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        }

        if (not_prime)
        {
            printf("%d is Not Prime", n);
        }
        else
            printf("%d is Prime", n);
    }
    return 0;
}