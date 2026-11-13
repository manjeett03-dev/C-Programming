#include <stdio.h>
int main()
{

    int a;

    printf("Enter your class(1,6,10,12): ");
    scanf("%d", &a);
    switch (a)
    {
    case 12:
        printf("your external examiners come this time\n");
    case 10:
        printf("your boards are this year\n");
    case 6:
        printf("YOU CAN WRITE ON YOUR OWN :\n");
    case 1:
        printf("YOU CAN WRITE\n");
    default:
        printf("GOOD LUCK");
    }
    return 0;
}