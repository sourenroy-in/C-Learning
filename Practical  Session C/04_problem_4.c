#include <stdio.h>

int main()
{

    int Base, Height;

    printf("Enter Base : ");
    scanf("%d", &Base);
    printf("Enter Height : ");
    scanf("%d", &Height);

    float area = 0.5 * Base * Height;

    printf("The area of a Triangle is %f", area);

    return 0;
}