#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("Multiplication.txt", "w");
    int num;
    printf("Enter num: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d", num * (i + 1));
        fprintf(fptr, "%c", '\n');
    }

    fclose(fptr);

    return 0;
}