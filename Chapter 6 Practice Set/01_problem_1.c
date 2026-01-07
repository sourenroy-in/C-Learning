#include<stdio.h>

int main(){
    int i = 10;
    int* ptr = &i;

    // %d for Value, %p for pointer address %u for Unsigned integer
    printf("The address i is %p\n",&i);
    printf("The Value of i is %d\n",*ptr);
    return 0;
}