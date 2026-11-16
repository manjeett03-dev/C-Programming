#include <stdio.h>
int main()
{
    printf("1.: FOR UPRIGHT TRIANGULAR PATTERN \n");
    printf("2.: FOR DOWNWORD TRIANGULAR PATTERN \n");
    int n, h, j, i;
    char ch = '*';
    printf("Enter your choice (1/2): ");
    scanf("%d", &n);

    if (n == 1 || n == 2)
    {
        printf("Enter the height of pattern : ");
        scanf("%d", &h);

        switch (n)
        {

        case 1:
            printf("THE TRIANGULAR PATTERNS * OF HEIGHT %d IS : \n", h);
            for (i = 0; i <= h; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    printf("%c ", ch);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("THE INVERTED TRIANGULAR PATTERNS * OF HEIGHT %d IS : \n", h);

            for (i = h; i >= 0; i--)
            {
                for (j = 0; j <= i; j++)
                {
                    printf("%c ", ch);
                }
                printf("\n");
            }
            break;
        }
    }
    else
    {
        printf("Enter valid I/P: \n");
    }

    return 0;
}