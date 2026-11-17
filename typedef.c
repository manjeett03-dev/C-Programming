#include <stdio.h>
int main()
{ // typedef <old_name> <new_name>;
    typedef int integer;
    integer a, b, c;
    a = 5, b = 10, c = a + b;
    printf("The value of a: %d, b: %d, c: %d \n", a, b, c);
    return 0;
}