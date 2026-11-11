#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", (a + b) / 2);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a || b = %d\n", a || b);
    printf("a && b = %d\n", a && b);
    printf("! b = %d\n", !b);

    return 0;
}