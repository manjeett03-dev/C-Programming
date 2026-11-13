//

#include <stdio.h>
int main()
{
    int flag, n, i, j, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Prime numbers upto %d are: ", n);
    for (i = 2; i <= n; i++)
    {
        flag = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal prime numbers = %d\n", count);
    return 0;
}