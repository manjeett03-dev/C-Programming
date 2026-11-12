#include <stdio.h>
int main()
{
    int arr[50], n, i, j, temp;
    printf("Enter the no. of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d the elements: ", arr[50]);
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < 1; i++)
        printf("%d", arr[i]);
    printf("\n");
    return 0;
}