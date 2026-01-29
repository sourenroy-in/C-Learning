#include<stdio.h>
void main()
{
int a,b,n;
printf("enter 1 for checking number is even/odd, 2 for checking greater of 2 numbers, 3 for checking number is positive or not\n");
scanf("%d",&n);

switch(n)
	{
	case 1:printf("Enter 1  number");
		scanf("%d",&a);
		if(a%2==0)
		{
		printf("the number is even");
		}
		else
		{
		printf("the number is odd");
		}
	break;
	case 2:printf("Enter 2  numbers");
		scanf("%d%d",&a,&b);
		if(a>b)
		{
		printf("The greater num is %d",a);
		}
		else
		{
		printf("The greater num is %d",b);
		}
	break;
	case 3:printf("Enter 1 number");
		scanf("%d",&a);
		if(a>=0)
		{
		printf("the number is positive");
		}
		else
		{
		printf("the number is negetive");
		}
	break;
	
	default: printf("you enter the wrong input");
	}
}
		
