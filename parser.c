#include <stdio.h>
#include <string.h>
void parser(char str, int m)
{
    for (int i=0; i<m; i++)
    {
        printf("");
    }
}

int main()
{
    int m;
    char string[43];
    printf("ENTER YOUR LINK: \n");
    fgets(string, sizeof(string), stdin);
    m = strlen(string);
    printf("your header is : \n");
    //parser(string, m);
    return 0;
}