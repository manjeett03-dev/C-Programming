#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("your age is: %d \n",age);
    //1.type = if statement
    if (age>18){
        printf("YOU CAN VOTE !!!");
    }
    //2.type = if-else if statement
    else if (age>10)
    {
        printf("YOU CAN VOTE FOR KIDS");
    }
    else if (age>3)
    {
        printf("YOU CAN VOTE FOR BABIES");
    }


    //3.type = if else statement
    else
    {
        printf("YOU CANN'T VOTE");
    }

return 0;
}