#include<stdio.h>

int* sum(int a, int b){
    int s = a+b;
    int* ptr = &s;
    printf("The sum is %d\n", s);
    return ptr;
}

float* avg(int a, int b){
    float avge =(a+b)/2;
    float* ptr = &avge;
    printf("The average is %d\n", avge);
    return ptr;
}
int main(){
    int x;
    int y;
    int* ptr1;
    float* ptr2;

    printf("Enter The X: ");
    scanf("%d",&x);
    printf("Enter The Y: ");
    scanf("%d",&y);

    ptr1 = sum(x,y);
    ptr2 = avg(x,y);

    printf("The average of sum is %u and address of average is %u ",ptr1,ptr2);
    
    return 0;
}