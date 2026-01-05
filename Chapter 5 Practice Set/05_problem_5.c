#include<stdio.h>

int main(){
    int a =4;
    printf("%d %d %d \n",a, ++a, a++);
    // Evaluayion Order Right to Left  <--<--<--
    // a  ++a  4
    // a  6  4
    // 6 6 4
    return 0;
}