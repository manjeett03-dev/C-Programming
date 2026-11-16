#include <stdio.h>
#include <string.h>
int main()
{
    char n1[25], n2[25], n3[25]= " IS A GOOD FRIEND OF ";
    printf("Enter a name :\n");
    gets(n1);
    printf("Enter another name :\n");
    gets(n2);
    printf("%s", strcat(n1, strcat( n3, n2)));
    return 0;
    
}