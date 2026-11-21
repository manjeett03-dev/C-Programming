#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "a");
    char string[50] = "WHAT'S UP HOW ARE YOU";
    fprintf(ptr, "%s", string);
    printf("THIS FILE IS ADDED BY : %s\n", string);
    fclose(ptr);
    return 0;
}