#include <stdio.h>
void string(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[34];
    gets(str);
    printf("using printf: \n");
    printf("Enter your STRING :\n%s\n",str);
    printf("using puts: \n");
    puts(str);
    printf("using Custom function: \n");
    string(str);
    return 0;
}
