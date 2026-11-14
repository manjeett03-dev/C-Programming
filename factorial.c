#include <stdio.h>
int factorial(int n)
{
}
int main()
{
    int n, i, fact = 1;
    printf("Enter the no. whose factorial you want (0-15): ");
    scanf(" %d", &n);
    for (i = 1; i <= n; i++)
    {
        if n == 0
            {
                printf("Factorial of 0 is 1\n");
            }
        else if n > 15
        {
            printf("Choose btw given range")
        }
        else
        {
            fact = fact * i;
        }
        printf("Factorial of %d is %d\n", i, fact);
    }

    return 0;
}