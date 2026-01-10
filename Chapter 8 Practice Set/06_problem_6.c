#include<stdio.h>
#include<string.h>

int main(){
    
    char c = 'r';
    int count  = 0;
    char str[] = "souren";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            count++;
        }
    }

    printf("%d",count);
    
    
    return 0;
}