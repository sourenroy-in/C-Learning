#include <stdio.h>

int main()
{
    int i = 1, j = 1, sum = 0;
    // do
    // {
    //     sum = sum+i;
    //     i++;
    // }while (i<=10);

    for (j; j <= 10; j++)
    {
        sum = sum + j;
    }
    printf("%d", sum);
    return 0;
}