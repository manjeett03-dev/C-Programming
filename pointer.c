#include <stdio.h>
int main()
{
    int a = 22;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of a is %d\n", &a);
    printf("The address of pointer to a is %p\n", *ptra);
    printf("The address of pointer in hexadecimal to a is %x\n", *ptra);
    printf("The value of pointer to a is %d\n", *ptra);
    printf("The value a is %d\n", a);
    printf("The address of pointer to a is %p\n", &a);
    printf("The address of pointer to 2 is %p\n", ptr2);
    printf("The address of pointer to a is %p\n", *ptra - 1);
    printf("The address of pointer to a is %p\n", *ptra + 1);
    printf("The address of pointer to a is %p\n", *ptra + 5);
    printf("The address of pointer to a is %p\n", *ptra - 5);
    int arr[] = {5, 10, 15, 20, 25};
    int *ptrarr = arr;
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("Value at position 3 of the array is %d\n", &arr[3]);
    printf("address at position 1 of the array is %d\n", arr);
    printf("address at position 1 of the array is %d\n", &arr[0]);
    printf("address at position 2 of the array is %d\n", &arr[1]);
    printf("address at position 2 of the array is %d\n", arr + 1);
    printf("value address at position 1 of  the array is %d\n", *(&arr[0]));
    printf("value address at position 2  of the array is %d\n", *(&arr[1]));
    printf("value address at position 1  of the array is %d\n", *(arr));
    printf("value address at position 2  of the array is %d\n", arr[1]);
    printf("value address at position 2 of the array is %d\n", *(arr +1));
    printf("value address at position 1 of the array is %d\n", *ptrarr);

    return 0;
}
