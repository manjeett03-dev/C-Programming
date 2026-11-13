#include <stdio.h>
int main ()
{
    int a, temp, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Before swapping \n a : %d, b: %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping\n ");
    printf("a : %d b : %d \n", a, b);
    return 0;


}