#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i, j;
    char word[25];
    printf("Enter string you want to check for pallindrome : ");
    scanf("%s", word);
    int s = strlen(word);
    printf("Your string is : %s\n", word);
    for (i = 0, j = s - 1; i < j; i++, j--)
    {

        if (tolower(word[i]) != tolower(word[j]))
        {
            printf("%s is not a pallindrome\n", word);
            return 0;
        }
    }
    printf("%s is a pallindrome \n", word);

    return 0;
}