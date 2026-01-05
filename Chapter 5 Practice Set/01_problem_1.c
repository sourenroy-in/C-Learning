#include <stdio.h>
float average(int a, int b, int c);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a, b, c;

    printf("\nEnter The Number 1 :");
    scanf("%d", &a);
    printf("\nEnter The Number2 :");
    scanf("%d", &b);
    printf("\nEnter The Number 3 :");
    scanf("%d", &c);

    printf("The Average of a,b,c is %f", average(a, b, c));

    return 0;
}