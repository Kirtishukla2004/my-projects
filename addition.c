#include <stdio.h>
#include <conio.h>
void main()
{
    int m, n, i, j;
    printf("Enter the size of the matrices:\nNo. of rows (m): ");
    scanf("%d", &m);
    printf("\nNo. of columns(n): ");
    scanf("%d", &n);
    double a[m][n];
    double b[m][n];
    double sum[m][n];
    printf("\nEnter the elements of matrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    printf("\nEnter the elements of matrix B:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nThe sum of the matrices A and B is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%lf \n", sum[i][j]);
        }
        printf("\n");
    }
}
