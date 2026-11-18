#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, i;
    char *ptr;
    ptr[n] = '\0';
    printf("ABC Pvt Ltd. EMPLOYEE RECORDS: \n");
    printf("~~~~EMPLOYEE 1 :~~~~\n");
    printf("Enter digits your employee id contains : ");
    scanf("%d", &n);
    ptr = (char *)calloc(n, sizeof(char));
    printf("Enter your EID : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%c\n", &ptr[i]);
    }
    printf("\nEmployee 1. ID : %s", ptr);
    free(ptr);
    printf("~~~~EMPLOYEE 2 :~~~~\n");
    printf("Enter digits your employee id contains : ");
    scanf("%d", &n);
    ptr = (char *)realloc(ptr, (n + 1) * sizeof(char));
    printf("Enter your EID : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%c\n", &ptr[i]);
    }
    printf("Employee 2. ID : %s", ptr);
    free(ptr);
    printf("\n~~~~EMPLOYEE 3 :~~~~\n");
    printf("Enter digits your employee id contains : ");
    scanf("%d", &n);
    ptr = (char *)realloc(ptr, (n + 1) * sizeof(char));
    printf("Enter your EID : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%c\n", &ptr[i]);
    }
    printf("\nEmployee 3. ID : %s", ptr);
    free(ptr);

    return 0;
}