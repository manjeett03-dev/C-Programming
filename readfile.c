#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptr = NULL;
    char string[25] = "MY NAME IS MANJEET";
    ptr = fopen("minefile.txt", "r");
    fscanf(ptr, "%s", string);
    printf("THIS FILE CONTAINS : %s\n", string);
    return 0;
}