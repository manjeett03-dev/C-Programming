#include <stdio.h>

void bingo(int *array)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of array at %d is %d\n", i, array[i]);
    }
}
int main()
{

    int arr[4] = {10, 20, 30, 40};

    printf("The value of array:\n ");
    bingo(arr);
    return 0;
}