#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "w");
    char string [50] = "YUP.....";
    fprintf(ptr, "%s", string);
    printf("This file is now : %s\n", string);
    fclose(ptr);
    return 0;

}