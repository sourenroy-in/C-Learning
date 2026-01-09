#include<stdio.h>

int count(int arr[], int n){
    int c=0;
    for(int i = 0; i<n; i++){
        if(arr[i]>0){
            c++;
        } 
    }
    return c;
}

int main(){
    
    int arr[10] ={1,2,3,4,5,6,-7,8,-9,10};
    int n;

    printf("The count of positive Numbers in Array %d",count(arr,9));


    
    return 0;
}