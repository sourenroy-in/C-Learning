#include <stdio.h>
int main()
{
    int length,width;
    
    printf("Enter the Length:\n");
    scanf("%d", &length);
    printf("Enter Width of Rectangle: \n");
    scanf("%d", &width);

    printf("The Area of Rectangle is: %d", length * width);
    return 0;
}

