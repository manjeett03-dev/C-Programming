#include <stdio.h>
int main()
{
    int t, i;
    printf("Enter the no. whose table you want: ");
    scanf("%d", &t);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", t, i, i * t);
    }
    return 0;
}