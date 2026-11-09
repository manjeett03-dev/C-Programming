#include <stdio.h>
int main()
{
    int n, i;
    float marks, sum = 0, avg;
    printf(" Enter number of Subjects::");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter marks of Subject %d: ", i);
        scanf("%f", &marks);
        sum = sum + marks;
    }
    avg = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}