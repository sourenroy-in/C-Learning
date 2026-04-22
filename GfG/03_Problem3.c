// Write a Program to Swap the values of two variables.
#include<stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c;

    printf("Before Swapping values are a = %d, b = %d\n", a,b);

    c = a; a = b; b = c;
    
    printf("After swapping Values are a = %d, b = %d\n",a,b );

    return 0;

}

