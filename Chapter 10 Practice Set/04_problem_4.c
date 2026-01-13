#include <stdio.h>

int main()
{

    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("New1.txt", "r");
    ptr2 = fopen("New2.txt", "a");

    while (1)
    {
        ch = fgetc(ptr);
        // printf("%c", ch);

        if (ch == EOF)
        {
            break;
        }
        else
        {
            
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }

    return 0;
}