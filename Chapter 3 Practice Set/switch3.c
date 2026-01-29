#include<stdio.h>
void main()
{
	char n;
	int a,b;
	printf("Enter your Option: + for calculate addition,-diffrence,/ division, * for multiplication");
	scanf("%c",&n);
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	
	switch(n)
	{
		case'+':printf("The sum is %d",a+b);
		break;
		case'-':printf("the divison is %d",a-b);
		break;
		case'*':printf("the multiplication is %d",a*b);
		break;
		case'/':printf("the division id %d",a/b);
		break;
		default: printf("you enter wrong option");
	}
}
