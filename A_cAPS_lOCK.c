#include <stdio.h>

int isUpperCase(char c)
{
    return c >= 'A' && c <= 'Z';
}

int isLowerCase(char c)
{
    return c >= 'a' && c <= 'z';
}

char toUpperCase(char c)
{
    if (isLowerCase(c))
    {
        return c - 'a' + 'A';
    }
    return c;
}

char toLowerCase(char c)
{
    if (isUpperCase(c))
    {
        return c - 'A' + 'a';
    }
    return c;
}

int main()
{
    char word[101];
    scanf("%s", word);

    int allUpperCase = 1;
    int firstLetterUpperCase = isUpperCase(word[0]);

    for (int i = 1; word[i] != '\0'; i++)
    {
        if (!isUpperCase(word[i]))
        {
            allUpperCase = 0;
            break;
        }
    }

    if (allUpperCase || (firstLetterUpperCase && allUpperCase))
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            word[i] = isUpperCase(word[i]) ? toLowerCase(word[i]) : toUpperCase(word[i]);
        }
    }

    printf("%s\n", word);

    return 0;
}
