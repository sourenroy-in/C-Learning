#include<stdio.h>

void change_to_ten_times(int* );
void change_to_ten_times(int* a){
    *a = *a * 10;
}


int main(){
    int x = 45;
    printf("The Value of X is %d\n",x);
    change_to_ten_times(&x);
    printf("The Value of X is %d \n",x);


    return 0;
}