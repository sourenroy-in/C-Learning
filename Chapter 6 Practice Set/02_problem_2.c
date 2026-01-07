#include<stdio.h>

int returning_5(int *ptr){
        printf("The value of ptr %p\n",ptr);
        printf("The Value at ptr %d\n",*ptr);
        return 5;
}

int main(){
    int i = 10;
    int* ptr = &i;

    printf("The address i is %p\n",&i);
    returning_5(ptr);
    return 0;
}