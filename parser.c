#include <stdio.h>
#include <string.h>
void parser(char *str, int m)
{
    int in = 0;
    int index = 0;
    printf("PROCESSING:\n");
    printf("Your Header is : \n");

    for (int i = 0; i < m; i++)
    {
        if (str[i] == '<')
        {

            in = 1;
            continue;
        }
        else if (str[i] == '>')
        {

            in = 0;
            continue;
        }
        if (in == 0)
        {
            str[index] = str[i];

            index++;
        }
    }
    str[index] = '\0';
    while (str[0] == ' ')
    {
        for (int i = 0; i < m; i++)
            str[i] = str[i + 1];
    }
}

int main()
{
    int m;
    char mango[] = "<h1>           This is a Heading           <h1>";
    m = strlen(mango);

    parser(mango, m);
    printf("%s\n", mango);
    printf("~~~~%d~~~~", mango);
    return 0;
}