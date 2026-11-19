#include <stdio.h>
int main()
{
    int i = 0, j = 0, k, r, c, m, n;

    printf("~~MATRIX A: ~~\n");
    printf("Enter no. of Rows : ");
    scanf("%d", &r);
    printf("Enter no. of Columns : ");
    scanf("%d", &c);
    printf("Matrix A has dimensions of %d and %d \n", r, c);
    printf("~~MATRIX B: ~~\n");
    printf("Enter no. of Rows : ");
    scanf("%d", &m);
    printf("Enter no. of Columns : ");
    scanf("%d", &n);
    printf("Matrix B has dimensions of %d and %d \n", m, n);

    if (c != m)
        printf("Matrix A And Matrix B Are Not Multiplicable To Eachother:\n");
    else
    {
        printf(" Matrix A and Matrix B Are Mulitiplicable \n");
        int mat1[r][c];
        int mat2[m][n];
        int mat12[r][n];

        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("Enter %d Elements of Matrix A : [%d] [%d] \n", r * c, i, j);
                scanf("%d", &mat1[i][j]);
                getchar();
            }
        }
        printf("Matrix A is : \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d\t", mat1[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter %d Elements of Matrix B : [%d] [%d] \n", m * n, i, j);
                scanf("%d", &mat2[i][j]);
                getchar();
            }
        }
        printf("Matrix B is : \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", mat2[i][j]);
            }
            printf("\n");
        }
        printf("Matrix AB is: \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < n; j++)
            {
                mat12[i][j] = 0;
                for (k = 0; k < c; k++)
                {
                    mat12[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
            printf("\n");
        }
        printf("The Matrix AB is : \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", mat12[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}