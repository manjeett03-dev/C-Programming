#include <stdio.h>
int main()
{
    int n, i = 0;
    printf("ENTER A NO.: ");
    scanf("%d", &n);
    while (i < n)
    {
        i = i + 1;
        printf("%d ", i);
    }
    return 0;
}