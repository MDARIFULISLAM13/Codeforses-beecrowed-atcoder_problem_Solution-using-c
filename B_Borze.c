#include <stdio.h>
#include <string.h>
int main()
{
    char a[10000];
    fgets(a, 10000, stdin);
    for (int i = 0; a[i] != '\n'; i++)
    {
        if (a[i] == '.')
        {
            printf("0");
        };
        if (a[i] == '-' && a[i + 1] == '.')
        {
            printf("1");
            i++;
        };
        if (a[i] == '-' && a[i + 1] == '-')
        {
            printf("2");
            i++;
        };
    }
}