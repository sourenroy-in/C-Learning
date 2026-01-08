#include<stdio.h>

int main(){
    
    int radius;

    printf("Enter Radius : ");
    scanf("%d",&radius);

    float val = 3.1415 * radius * radius;
    printf("The area of a Rectangle is %.2f",val);
    
    return 0;
}