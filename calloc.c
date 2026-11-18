#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, n;
    char *ptr;
    printf("Enter the size you want: ");
    scanf("%d", &n);
    ptr = (char *)calloc(n + 1, sizeof(char));
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of string at %d is : \n", i);
        scanf(" %c", &ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("The value of string at %d is : %c \n", i, ptr[i]);
    }
    printf("without input calloc stores ASCII: %d \n", ptr[n]);
    printf("Full string is : %s \n", ptr);
    return 0;
}