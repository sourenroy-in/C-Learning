#include<stdio.h>

int main(){
    
    FILE *ptr1;
    FILE *ptr2;

    int salary1, salary2;
    char name1[30], name2[30];

    ptr1 = fopen("employye.txt", "w");

    printf("Enter the 1st Employee Name ");
    scanf("%s", &name1);
    printf("Enter the salary of 1st Employee: ");
    scanf("%d",&salary1);
    
    printf("Enter the 2nd Employee Name ");
    scanf("%s", &name2);
    printf("Enter the salary of 2nd Employee: ");
    scanf("%d",&salary2);

    fprintf(ptr1, "%s", name1);
    fprintf(ptr1, "%s", ",");
    fprintf(ptr1, "%d", salary1);
    fprintf(ptr1, "%c", '\n');

    fprintf(ptr2, "%s", name2);
    fprintf(ptr2, "%s", ",");
    fprintf(ptr2, "%d", salary2);
    fprintf(ptr2, "%c", '\n');
    

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}