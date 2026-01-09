#include<stdio.h>

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

}

void reverse(int arr[], int n){
    // Swaping Variable
    // int a,b,temp;
    // temp  = a;
    // a = b;
    // b = temp;
    int temp;
    for (int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i]= arr[n-i-1];
        arr[n-i-1] = temp;
    }
}


int main(){
    
    int array[] = {1,2,3,4,5};
    printArray(array,5);
    reverse(array,5);
    printArray(array,5);
    
    return 0;
}