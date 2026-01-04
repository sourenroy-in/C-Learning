#include<stdio.h>

int main(){
    int product = 1,n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=n)
    {
        product *= i;
        i++;
    }
    printf("The Factorial of %d is %d",n,product);

    return 0;
}