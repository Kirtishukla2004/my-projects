#include <stdio.h>
int main()
{
    int S[10][10], m, n, i, k = 0, size = 0;
    printf("Enter number of rows in the matrix : ");
    scanf("%d", &m);
    printf("Enter number of columns in the matrix : ");
    scanf("%d", &n);
    printf("Enter elements in the matrix : ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &S[i][j]);

    printf("The matrix is \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", S[i][j]);
            if (S[i][j] != 0)
                size++;
        }
        printf("\n");
    }
    int M[3][size];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (S[i][j] != 0)
            {
                M[0][k] = i;
                M[1][k] = j;
                M[2][k] = S[i][j];
                k++;
            }

    printf("Triplet representation of the matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
            printf(" %d ", M[i][j]);

        printf("\n");
    }
    return 0;
}