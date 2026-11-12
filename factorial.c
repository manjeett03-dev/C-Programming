#include <stdio.h>
int main()
{
    int n, i, fact = 1;
    printf("Enter the no. whose factorial you want (0-20): ");
    scanf(" %d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n < 0 || n > 20)
        {
            printf(" Enter btw 0-20");
        }
        else
        {
            fact = fact * i;
        }
        printf("Factorial of %d is %d\n", i, fact);
    }
    return 0;
}