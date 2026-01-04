#include<stdio.h>

int main(){
    int sum =0;

    for (int i = 0; i <= 10; i++)
    {
        sum +=(8*i);
    }
    printf("Sum of the table of 8: %d",sum);
    return 0;
}