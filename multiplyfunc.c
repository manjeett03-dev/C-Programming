#include <stdio.h>
#include <stdlib.h>
int product(int a, int b)
{
    return a * b;
}
int main()
{
    int (*func)(int, int);
    func = &product;
    int d = (*func)(6, 12);
    printf("The value of d is : %d", d);
    return 0;
}