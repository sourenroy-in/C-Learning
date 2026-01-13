#include<stdio.h>

int main(){
    
    FILE *fptr;
    fptr = fopen("Text.txt", "w");
    int num = 456;

    fprintf(fptr, "%d", num);
    fclose(fptr);
    
    return 0;
}