#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    fgets(a, 1000, stdin);
    int b = strlen(a);
    char f = ',';
    char e = '}';
    char g = '{';
    int count = 0;

    for (int i = 0; i < b; i++)
    {
        if (a[i] != f && a[i] != e && a[i] != g && a[i] != '\n' && a[i] != ' ')
        {
            int test = 0;
            for (int l = i - 1; l >= 0; l--)
            {
                if (a[i] != a[l])
                {

                    test++;
                }
                else
                {
                    test = 0;
                    break;
                };
            }
            if (test > 0)
            {
                count++;
            }
        }
    }
    printf("%d", count);
}