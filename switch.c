#include <stdio.h>
int main()
{

    int a;

    printf("Enter no. of failed subjects: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("hello\t");
    case 2:
        printf("nope\t");
    default:
        printf("yup");
    }
    return 0;
}