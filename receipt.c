#include <stdio.h>
#include <string.h>
void replace(char *str, const char *oldWord, const char *newWord)
{
    char buffer[1024];
    char *pos;
    int oldlen = strlen(oldWord);

    while ((pos = strstr(str, oldWord)) != NULL)
    {
        int prefixLen = pos - str;
        strncpy(buffer, str, prefixLen);
        buffer[prefixLen] = '\0';

        strcat(buffer, newWord);
        strcat(buffer, pos + oldlen);

        strcpy(str, buffer);
    }
}
int main()
{
    char name[30], item[30], outlet[30];
    printf("Enter your name: ");
    scanf("%29[^\n]", name);

    printf("Enter item name: ");
    scanf(" %29[^\n]", item);

    printf("Enter outlet name: ");
    scanf(" %29[^\n]", outlet);

    FILE *infile = fopen("letter.txt", "r");
    FILE *outfile = fopen("receipt_out.txt", "w");

    if (infile == NULL || outfile == NULL)
    {
        printf("Error in opening file! Make sure letter.txt exists. \n");
        return 1;
    }
    char line[1024];
    while (fgets(line, sizeof(line), infile) != NULL)
    {
        replace(line, "{{name}}", name);
        replace(line, "{{item}}", item);
        replace(line, "{{outlet}}", outlet);
        fputs(line, outfile);
    }
    fclose(infile);
    fclose(outfile);
    printf("RECEIPT GENERATED SUCCESSFULLY !! CHECK receipt_out.txt for print !!...\n ");
    return 0;
}