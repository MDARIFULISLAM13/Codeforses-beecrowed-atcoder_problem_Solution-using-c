#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    char b[100];
    scanf("%s", &b);
    int cb = 1;
    int co = 0;
    char o[100];
    int c = strlen(b);
    int d = 0;
    for (int i = 0; i < c; i++)
    {

        d = d + b[i];
    }
    for (int i = 1; i < a; i++)
    {
        char e[100];
        scanf("%s", &e);
        int f = 0;
        int g = strlen(e);
        for (int i = 0; i < g; i++)
        {

            f = f + e[i];
        }
        if (f != d)
        {
            for (int j = 0; j < g; j++)
            {
                o[j] = e[j];
            }
            co++;
        }
        else
        {
            cb++;
        }
    }
    if (co > cb)
    {
        printf("%s\n", o);
    }
    else
    {
        printf("%s\n", b);
    }
}
