#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("Enter 3 Sides of Triangle \n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        if (a == b && b == c)
        {
            printf("Equilateral Triangle \n");
        }
        else if (a == b || b == c || a == c)
        {
            printf(" Isosceles Trianglr \n");
        }
        else
        {
            printf("Scalene Triangle \n");
        }
    }
    else
    {
        printf("Triangle is not Possible \n");
    }
    return 0;
}