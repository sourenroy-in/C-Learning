#include<stdio.h>

int main() {
    // Write a Program to check if the given number is Even or Odd.
    int num;
    printf("Enter the Number for check it's Even or Odd: ");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("%d is Even", num);
    } else {
        printf("%d is Odd", num);
    }
    return 0;
}