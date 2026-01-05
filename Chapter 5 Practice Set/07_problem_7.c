#include<stdio.h>
//  Odd Number Pattern 
int main(){
    int n = 7;
    // This Loop run for iteration
    for(int i = 0; i<n; i++){
        // This loop run for print (2*i+1) star Odd
        for(int j = 0; j<2*i+1; j++){
            printf("*");
        }
        // This Prints a New Line
        printf("\n");
    }

    return 0;
}  