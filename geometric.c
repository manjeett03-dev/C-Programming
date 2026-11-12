#include <stdio.h>
int main()
{
    int n, i;
    float a, sum =0, r, term;
    printf("Enter 1st term: ");
    scanf("%f", &a);
    printf("Enter common ratio: ");
    scanf("%f", &r);
    printf("Enter the no. of term s: ");
    scanf("%d",&n);
    term = a;
    printf("Geometric Series: ");
    for (i=1; i<=n; i++)

    {
        printf("%.2f\t", term);
        sum = sum + term;
        term = term * r;
    }
    printf("\n Sum of Series = %.2f", sum);
    return 0;
}