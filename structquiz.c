#include <stdio.h>
#include <string.h>
typedef struct driver
{
    char name[50];
    char license[50];
    char route[50];
    int km;
} drv;
int main()
{
    int n = 0;
    struct driver n1, n2, n3;
    printf("Choose btw (1: n1/2: n2/3: n3)\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        printf("Enter your name: \n");
        scanf("%s", &n1.name);
        printf("Enter License no.: \n");
        scanf("%s", &n1.license);
        printf("Enter your route: \n");
        scanf("%s", &n1.route);
        printf("Enter kms exp: \n");
        scanf("%d", &n1.km);
        printf("YOU ARE DRIVE 1: \n");
        printf("Name        : %s\n", n1.name);
        printf("License No. : %s\n", n1.license);
        printf("Route       : %s\n", n1.route);
        printf("Km EXP      : %d\n", n1.km);
        printf("THANKS FOR YOUR COORPORATION: \n");
        break;
    }
    case 2:
    {
        printf("Enter your name: \n");
        scanf("%s", &n2.name);
        printf("Enter License no.: \n");
        scanf("%s", &n2.license);
        printf("Enter your route: \n");
        scanf("%s", &n2.route);
        printf("Enter kms exp: \n");
        scanf("%d", &n2.km);
        printf("YOU ARE DRIVE 2: \n");
        printf("Name        : %s\n", n2.name);
        printf("License No. : %s\n", n2.license);
        printf("Route       : %s\n", n2.route);
        printf("Km EXP      : %d\n", n2.km);
        printf("THANKS FOR YOUR COORPORATION: \n");
        break;
    }
    case 3:
    {
        printf("Enter your name: \n");
        scanf("%s", &n3.name);
        printf("Enter License no.: \n");
        scanf("%s", &n3.license);
        printf("Enter your route: \n");
        scanf("%s", &n3.route);
        printf("Enter kms exp: \n");
        scanf("%d", &n3.km);
        printf("YOU ARE DRIVE 3: \n");
        printf("Name        : %s\n", n3.name);
        printf("License No. : %s\n", n3.license);
        printf("Route       : %s\n", n3.route);
        printf("Km EXP      : %d\n", n3.km);
        printf("THANKS FOR YOUR COORPORATION: \n");
        break;
    }

    default:
    {
        printf("INVALID CHOICE: ");
    }
    }

    return 0;
}