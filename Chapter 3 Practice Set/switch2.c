#include<stdio.h>
void main()
{
    int n,a,b;
    printf("\nenter your option :1 for addition,2for substraction,3for multiplication,4 for division");
    scanf ("%d",&n);
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    switch(n)
    {
         case 1: printf("The sum is : %d", a+b);
         	break;
         case 2: printf("The substraction : %d", a-b);
         	break;
         case 3: printf("The multiplication is %d", a*b);
         	break;
         case 4: printf("The division is %d",a/b);
         	break;
         default: printf("You have input wrong option");
    }
}
