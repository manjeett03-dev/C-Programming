#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int avg(int a, int b)
{
    return (a + b) / 2;
}
void greatmorningandexecute(int (*ptr)(int, int))
{
    printf("Good Morning User \n");
    printf("The average of two no. is : %d\n", ptr(5, 7));
}
void greatafternoonandexecute(int (*ptr)(int a, int b))
{
    printf("Good Afternoon User \n");
    printf("The average of two no. is : %d\n", ptr(5, 7));
}
int main()
{
    int (*fptr)(int, int);
    fptr = avg;
    greatafternoonandexecute(fptr);
    greatmorningandexecute(fptr) ;
    return 0;
}