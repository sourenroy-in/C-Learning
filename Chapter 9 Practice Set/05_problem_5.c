#include <stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
} c;

void display(c x)
{
    printf("The Value of Complex number is %d + %di\n", x.real, x.imaginary);
}

int main()
{

    c arr[10];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Real part \n");
        scanf("%d", &(arr[i].real));

        printf("Enter Imaginary part \n");
        scanf("%d", &(arr[i].imaginary));

        display(arr[i]);
    }

    return 0;
}