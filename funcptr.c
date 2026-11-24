#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int avg(int a, int b)
{
    return (a + b) / 2;
}
void greeteveningandexecute(int (*ptr)(int, int))
{
    printf("Good Evening User \n");
    printf("The average of two no. is : %d\n", ptr(5, 7));
}
void greetafternoonandexecute(int (*ptr)(int a, int b))
{
    printf("Good Afternoon User \n");
    printf("The average of two no. is : %d\n", ptr(5, 7));
}
int main()
{
    int (*fptr)(int, int);
    fptr = avg;
    greetafternoonandexecute(fptr);
    greeteveningandexecute(fptr) ;
    return 0;
}