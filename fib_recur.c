#include <stdio.h>
int fib(int n)
{
    if (n == 1)
        return 1;
    else if (n == 0)
        return 0;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int i, n, a = 0, b = 1;
    printf("Enter the terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series upto %d :\t", n);
    for (i = 0; i < n; i++)
    {
        printf("%d\t", fib(i));
    }

    return 0;
}