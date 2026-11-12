#include <stdio.h>
#include <ctype.h>
int main()
{
    int n;
    char maths;
    printf("How many subjects you had passed in your exam (0-2): \n");
    scanf(" %d", &n);
    if (n == 2)
    {
        printf("YOU WON COUPON OF $45");
    }
    else if (n == 1)
    {
        printf("had you passed your maths exam (Y/N): \n");
        scanf(" %c", &maths);

        if (maths == 'Y')

        {
            printf("YOU HAD PASSED MATHS EXAM\n");
            printf("YOU WON COUPON OF $20\n");
        }
        else if (maths == 'N')
        {
            printf("Means you had passed science exam\n");
            printf("YOU WON COUPON OF $10\n");
        }
        else
        {
            printf("invaliD char o/p\n");
        }
    }
    else if (n == 0)
    {
        printf("BETTER LUCK NEXT TIME\n");
    }
    else
    {
        printf("INVALID INPUT\n");
    }

    return 0;
}