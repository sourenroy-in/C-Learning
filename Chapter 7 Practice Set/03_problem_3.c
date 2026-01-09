#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int arr[11]; 


    for(int i = 0; i<10; i++){
        arr[i] = n*(i+1);
    }
    for(int j = 0; j<10; j++){
        printf("The Value of %d X %d = %d \n",n,j+1,arr[j]);
        
    }
    
    
    return 0;
}