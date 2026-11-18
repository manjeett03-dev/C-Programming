#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randomnum(int a)
{
    return rand() % a;
}
int main()
{
    int i = 0, c, count = 0;
    srand(time(NULL));
    while (i < 3)
    {
        printf("\n~~ROUND %d~~\n", i + 1);
        printf("1. For SCIOSSORS   : \n2. For ROCKS       : \n0. For PAPER       : \n");
        printf("Enter your choice  : ");
        scanf("%d", &c);
        int comp = randomnum(3);
        printf("Computer Choosen   : %d\n", comp);

        {

            if (c == comp)
            {
                printf("DRAW POINT: \n");
            }
            else if ((c == 1 && comp == 0) || (c == 2 && comp == 1) || (c == 0 && comp == 2))
            {
                printf("CONGRATULATIONS YOU GOT A SCORE:\n");
                count++;
            }
            else if ((c == 0 && comp == 1) || (c == 1 && comp == 2) || (c == 2 && comp == 0))
            {
                printf("YOU LOSE A SCORE: \n");
            }
            else
            {
                printf("INVALID CHOICE: \n");
            }
            i++;
        }
    }

    printf("\nSCORE :%d\\3\n", count);
    if (count >= 2)
    {
        printf("FINAL WINNER IS YOU\n");
    }
    else
    {
        printf("YOU LOSE THE GAME : \n");
    }

    return 0;
}