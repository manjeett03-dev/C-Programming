#include <stdio.h>

int a= 50;

int quad(int o)
{
    int static m = 10;
    printf("The value after increment is %d \n", m);
    m++;
    return o + m;
}
int main()
{
    a = 5;
    printf("the value of a before increment: %d \n", a);
    quad(a);
    quad(a);
    quad(a);
    quad(a);
    printf("the vale of a after increment %d \n", quad(a));
    return 0;
}