#include <stdio.h>
#include <stdlib.h>
int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return (a * factorial(a - 1));
    }
}
int main()
{
    int (*func)(int);
    int n;
    func = &factorial;
    printf("Enter Factorial no.: ");
    scanf("%d", &n);
    int fact = (*func)(n);
    printf("The value of Factorial is : %d", fact);
    return 0;
}