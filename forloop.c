#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the no. to which you want to print natural no.: ");
    scanf(" %d", &n);
    for (i = 1; i <= n; i++)
    {
        printf(" %i ", i);
    }
    return 0;
}