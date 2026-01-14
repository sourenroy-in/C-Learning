#include<stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
} c ;


int main(){
    
    struct complex x = {1,2};
    printf("The Value of Complex number is %d + %di\n",x.real, x.imaginary);
    
    
    
    return 0;
}