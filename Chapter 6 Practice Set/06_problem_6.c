#include <stdio.h>

int main()
{
    int i = 2;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;

    printf("The address of I is %u\n", &i);
    printf("The address of I is %u\n", *ptr1);
    printf("The address of I is %u\n", **ptr2);
    return 0;
}