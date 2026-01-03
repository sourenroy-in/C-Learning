#include<stdio.h>

int main(){
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);

    if(year%400 == 0 || year%4 == 0 && year % 100 != 0){
        printf("%d Year is leap Year",year);
    }
    else{
        printf("%d Year is Not LeapYear",year);
    }
    return 0;
}