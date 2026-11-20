/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/

#include <stdio.h>
int main()
{
    int i, j, k, m, carry, n;
    printf("Enter digits of no. in l1: ");
    scanf("%d", &m);
    printf("Enter %d digits in l1 : \n", m);
    int l1[m];
    for (i = 0; i < m; i++)
    {
        scanf("%d", &l1[i]);
    }
    printf("\n");
    printf("l1 : \n");
    for (i = 0; i < m; i++)
    {
        printf("%d\t", l1[i]);
    }
    printf("\n");

    printf("Enter digits of no. in l2 : ");
    scanf(" %d", &n);
    int l2[n];
    printf("Enter %d digits in l1 : \n", n);
    printf("l2 : \n");
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &l2[i]);
    }
    printf("\n");
    printf("l2 : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", l2[i]);
    }
    printf("\n");
    int l3[m];
    l3[(m > n ? m : n) + 1];
    carry = 0, k = 0;
    for (i = 0; i < m || i < n || carry; i++)
    {
        int sum = carry;
        if (i < m)
            sum += l1[i];
        if (i < n)
            sum += l2[i];
        l3[k++] = sum % 10;
        carry = sum / 10;
    }
    printf("The sum is l3 : \n");
    for (i = 0; i < k; i++)
        printf("%d\t", l3[i]);
    printf("\n");

    return 0;
}