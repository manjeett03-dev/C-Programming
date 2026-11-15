#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the no. of subjects: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter %d subject marks: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("The array is: \t");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", marks[i]);
    }
    return 0;
}