//Transpose of a Rectangular Matrix

#include <stdio.h>

int main()
{
    int m = 2, n = 3;

    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int t[3][2];

    // Find transpose
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    // Display transpose
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}