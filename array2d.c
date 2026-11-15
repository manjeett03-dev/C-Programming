#include <stdio.h>
int main()
{
    int c, r, i, j;
    printf("Enter the no. of rows: ");
    scanf("%d", &r);
    printf("Enter the no. of Coloumn: ");
    scanf("%d", &c);
    int matrix[r][c];
    printf("ENTER %d ELEMENTS OF MATRIX : ", r*c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("THE MATRIX IS [%d] [%d] ", i, j);
            scanf(" %d", &matrix[i][j]);
        }
    }
    printf("\nThe Matrix is: \n");
    for (i = 0; i < r; i++)

    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
