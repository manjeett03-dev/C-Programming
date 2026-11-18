#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, m, l, i;
    char *ptr;
    printf("ABC Pvt Ltd. EMPLOYEE RECORDS: \n");
    printf("~~~~EMPLOYEE 1 :~~~~\n");
    printf("Enter digits your employee id contains : ");
    scanf("%d", &n);
    ptr = (char *)calloc(n, sizeof(char));
    printf("Enter your EID : \n");
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &ptr[i]);
    }
    ptr[n] = '\0';
    printf("Employee 1. ID : %s", ptr);

    printf("\n~~~~EMPLOYEE 2 :~~~~\n");
    printf("Enter digits your employee id contains : ");
    scanf(" %d", &m);
    ptr = (char *)realloc(ptr, (m + 1) * sizeof(char));
    printf("\nEnter your EID : \n");
    for (i = 0; i < m; i++)
    {
        scanf(" %c", &ptr[i]);
    }
    ptr[m] = '\0';
    printf("Employee 2. ID : %s", ptr);

    printf("\n~~~~EMPLOYEE 3 :~~~~\n");
    printf("Enter digits your employee id contains : ");
    scanf(" %d", &l);
    ptr = (char *)realloc(ptr, (l + 1) * sizeof(char));
    printf("\nEnter your EID : \n");
    for (i = 0; i < l; i++)
    {
        scanf(" %c", &ptr[i]);
    }
    ptr[l] = '\0';
    printf("\nEmployee 3. ID : %s", ptr);
    free(ptr);
    printf("\nGOOD JOB!!!\nWELL DONE._.");

    return 0;
}