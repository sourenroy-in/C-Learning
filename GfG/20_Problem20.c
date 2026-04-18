// Using sprintf()
#include <stdio.h>

int main() {
    char s1[20] = "Hello ";
    char s2[] = "Geeks";

    // Concatenate str1 and str2 using sprintf
    sprintf(s1 + strlen(s1), "%s", s2);

    printf("%s\n", s1);
    return 0;
}