// Find the largest number among the three numbers.
#include<stdio.h>

int main() {
    int num1, num2, num3;

    printf("\nEnter Number1: ");
    scanf("%d",&num1);

    printf("\nEnter Number2: ");
    scanf("%d",&num2);

    printf("\nEnter Number3: ");
    scanf("%d",&num3);

    if(num1>=num2 && num1>=num3) {
        printf("The greates Number is: %d",num1);
    } else if (num2>=num1 && num2>=num3) {
        printf("The greates Number is: %d",num2);
    } else {
        printf("The greates NUmber is %d",num3);
    }

    return 0;
}