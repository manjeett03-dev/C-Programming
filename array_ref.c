#include <stdio.h>
void array(int *man, int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("The value of array at %d is : %d \n", i, man[i]);
    }
}

int main()
{
    int i, n=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    array(arr, n);
    return 0;
}