#include<stdio.h>

float force(float);

float force(float mass){
    return mass*9.8;
}

int main(){
    int m = 0;
    printf("Enter The Force: ");
    scanf("%d",&m);
    printf("The Value of Force is %.2f", force(m));
    return 0;
}