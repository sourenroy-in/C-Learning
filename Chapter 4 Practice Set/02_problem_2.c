#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    for (int i = 11; i > 0; i--)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}