#include<stdio.h>
#include<string.h>

int main(){
    
    char c = 'v';
    int contains  = 0;
    char str[] = "souren";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
         contains = 1;
         break;
        }
    }
    if(contains){
        printf("Yess it Contains \n");
    } else{
        printf("Nooo it Does Not contains \n");
    }

    
    
    
    return 0;
}