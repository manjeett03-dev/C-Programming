#include <stdio.h>
void mat(int *m, int *n)
{
    int temp = *m;
    *m = *m + *n;
    *n = temp - *n;
}
int main()
{
    int a, b, p;
    printf("Enter value of A : ");
    scanf("%d", &a);
    printf("Enter value of B : ");
    scanf("%d", &b);
    mat(&a, &b);
    printf("The Value After the Process of A: %d & B: %d\n", a, b);

    return 0;
}