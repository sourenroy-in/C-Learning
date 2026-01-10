#include <stdio.h>

int mystrlen(char str[])
{

    int i = 0, count;
    char c = str[i];

    while (c != '\0')
    {
        c = str[i];
        i += 1;
    }

    count = i - 1;
    return count;
}

void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}

int main()
{

    char str1[] = "souren";
    char target[30];

    mystrcpy(target, str1);

    printf("%s %s\n", target, str1);

    return 0;
}