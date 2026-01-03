#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a charecter :");
    scanf("%c", &ch);
    printf("The Charecter is %c\n", ch);
    printf("The value of charecter is %d\n", ch);
    // 97 = a, 122 = z;
    if (ch >= 97 && ch <= 122)
    {
        printf("The charecter is lowercase");
    }
    else
        printf("The charecter is Not lowercase Case");
    return 0;
}