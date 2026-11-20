#include <stdio.h>
int main()
{ /*You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice*/

    int i, j, numsSize, target;
    printf("Enter the number of elements in  array ; ");
    scanf("%d", &numsSize);
    int nums[numsSize];
    printf("Enter target : ");
    scanf("%d", &target);
    printf("Enter %d elements of array :", numsSize);
    for (i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("\n");
    printf("The array is : ");
    for (i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("Two numbers index are : \n");
    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("\n[%d,%d]\n", i, j);
                break;
            }
        }
    }
    return 0;
}