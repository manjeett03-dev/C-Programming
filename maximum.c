#include <stdio.h>
int main()
{
    int n, i, max, arr[50];
    printf("Enter the number of Elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Maximum Element = %d\n", max);
    return 0;
}