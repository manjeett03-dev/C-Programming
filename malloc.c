#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    printf("Enter the size you want: ");
    scanf("%d", &n);
    int *ptr = malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of array at %d id : \n", i);
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("The value of array at %d is : %d \n", i, ptr[i]);
    }
    printf("The value of array at %d is : %d ",n+1, ptr[n+1]);

    return 0;
}