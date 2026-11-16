#include <stdio.h>
void rev_arr(int* arr, int n)
{
    int i;
    for (i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int i, arr[20], n;
    printf("Enter no. of elements in array (max 20) : \n");
    scanf("%d", &n);
    printf("Enter %d elements :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("Array befor function :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Reversed Array after function is : \n");
    rev_arr(arr,n);

    return 0;
}