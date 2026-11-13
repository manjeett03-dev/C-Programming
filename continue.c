#include <stdio.h>
int main()
{
    int a;
    while (1)
    {
        printf("Enter a no.: \n ");
        scanf("%d", &a);

        if (a > 11)
        {
            printf("\n");
            break;
        }

        else if (a > 18)
        {

            continue;
        }
        else
        {
            printf("VOTE ME ");
        }
    }

    return 0;
}