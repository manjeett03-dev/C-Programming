#include <stdio.h>
int main()
{
    int a, temp, rev = 0, digit;
    printf("Enter the no. :");
    scanf("%d", &a);
    temp = a;
    while (temp != 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }
    if (rev == a)
        printf("%d is a pallindrome\n", a);
    else
        printf("%d is not a pallindrome \n", a);
    return 0;
}
