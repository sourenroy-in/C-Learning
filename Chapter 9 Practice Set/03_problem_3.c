#include <stdio.h>

typedef struct employee
{
    int salary;
    float score;
} emp;

int main()
{

    emp e1;
    emp *ptr = &e1;
    // We can do any one...
    ptr->salary = 65;
    (*ptr).salary = 65;

    ptr->score = 56.30;
    (*ptr).score = 56.30;

    printf("The value of salary is and the Value of score is %d & %.2f \n", ptr->salary, ptr->score);

    return 0;
}