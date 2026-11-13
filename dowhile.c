#include <stdio.h>
int main()
{
    int i =-1, n;
    printf("Enter the  no. to which you want to print whole no.: ");
    scanf(" %d", &n);
    do
    {
        i = i + 1;
        printf(" %d ", i);

    } while (i < n);
    return 0;
}