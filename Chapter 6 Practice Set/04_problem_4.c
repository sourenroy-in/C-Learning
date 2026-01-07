#include<stdio.h>

int refrence(int* );
int refrence(int* a){
   
    printf("This is pass by Refrence %d\n",*a);
    *a = *a +10;
}

int main(){
    int x = 2;
    printf("Before pass by Value %d\n",x);
    refrence(&x);
    printf("After Refrence %d\n",x);
    
    return 0;
}