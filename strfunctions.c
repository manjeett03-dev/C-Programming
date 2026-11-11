#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50] = "Hello", s2[50] = "World", s3[50];
    int result;
    printf("s1 = %s,s2 = %s\n", s1, s2);
    /*1. strlen*/
    printf("The lenght of s1 = %d\n", (int)strlen(s1));
    /*2. strcpy*/
    strcpy(s3, s1);
    printf("After strcpy s3= %s\n", s3);
    /*3.strcat*/
    strcat(s1, s2);
    printf("After strcat, s1= %s\n", s1);
    /*strcmp*/
    result = strcmp(s3, s2);
    if (result == 0)
        printf("s3 =s2\n");
    else if (result < 0)
        printf("s3 < s2\n");
    else
        printf("s3 > s2\n");
    return 0;
}