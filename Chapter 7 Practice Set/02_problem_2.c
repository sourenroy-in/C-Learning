#include<stdio.h>

int main(){
    
    int arr[11]; 

    for(int i = 0; i<10; i++){
        arr[i] = 5*(i+1);
    }
    for(int j = 0; j<10; j++){
        printf("The Value of 5 X %d = %d \n",j+1,arr[j]);
        
    }
    
    
    return 0;
}