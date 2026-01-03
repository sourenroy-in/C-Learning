#include <stdio.h>

int main()
{
    float marks1, marks2, marks3;
    printf("Enter Marks\n");
    scanf("%f", &marks1);

    printf("Enter Marks\n");
    scanf("%f", &marks2);

    printf("Enter Marks\n");
    scanf("%f", &marks3);

    printf("The Marsks are :%f %f %f \n", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
        printf("You are Fail");
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("You fail due to less marks in per subject");
    }
    else
        printf("You Pass");
    return 0;
}