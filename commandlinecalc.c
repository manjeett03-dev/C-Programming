#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);
   
    printf("Operation  : %s\n", operation);
    printf("Num1 : %d\n", num1);
    printf("Num2 : %d\n", num2);

    if (strcmp(operation, "add") == 0)
    {
        printf("The Sum is %d", num1 + num2);
    }
    else if (strcmp(operation, "subtraction") == 0)
    {
        printf("The Difference is %d", num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("The Product is %d", num1 * num2);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("The Quotient is %d", num1 / num2);
    }

    return 0;
}
