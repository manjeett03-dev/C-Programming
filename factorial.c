#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else if (n <= 15)

        return (n * factorial(n - 1));

    else

        printf("NOT DEFINED !!");
    return 0;
}

int main()
{
    int n;
    printf("Enter the no. whose factorial you want: ");
    scanf("%d", &n);
    printf("The factorial of %d is: %d ", n, factorial(n));

    return 0;
}