#include <stdio.h>

int sum(int a, int b)

{
    return a + b;
}
int main()
{
    int a = 15, b = 10, c;
    c = sum(a, b);
    printf("the sum is %d ", c);

    return 0;
}