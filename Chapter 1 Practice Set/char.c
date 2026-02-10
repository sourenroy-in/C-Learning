#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
printf("enter a charecter :");
scanf("%c",&ch);

int isdigit =(ch <='0' && ch <='9' );

if (isdigit)
{
    printf("this is  %c charecter : ", ch);
    } else {
    printf("this is not %c  charecter :", ch );
};


return 0 ;

}
