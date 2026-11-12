#include <stdio.h>
int main()
{
    int n;
    char(maths), (Y), (N);
    printf("How many subjects you had passed in your exam (0-2): ");
    scanf(" %d", &n);
    if (n == 2)
    {
        printf("YOU WON COUPON OF $45");
    }
    else if (n == 1)
    {
        printf("had you passed your maths exam (Y/N): ");
        scanf(" %c", &maths);
        {
            if (maths == 'Y')

            {
                printf("YOU HAD PASSED MATHS EXAM");
                printf("YOU WON COUPON OF $20");
            }
            else if (maths == 'N')
            {
                printf("Means you had passed science exam\n");
                printf("YOU WON COUPON OF $10");
            }
        }
        else if (n == 0)
        {
            printf("BETTER LUCK NEXT TIME");
        }
        else
        {
            printf("INVALID INPUT");
        }
    }
    return 0;
}