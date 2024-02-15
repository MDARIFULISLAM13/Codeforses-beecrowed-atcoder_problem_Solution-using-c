#include <stdio.h>
int main()
{
    int count = 1;
    int a;
    scanf("%d", &a);
    if (a < 26)
    {
        printf("NO\n");
    }
    else
    {
        char b[a];
        scanf("%s", &b);
        int c[a];
        for (int i = 0; i < a; i++)
        {
            if (b[i] > 96)
            {
                c[i] = b[i] - 96;
            }
            else
            {
                c[i] = b[i] - 64;
            }
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                if (c[j] > c[j + 1])
                {
                    int t = c[j + 1];
                    c[j + 1] = c[j];
                    c[j] = t;
                }
            }
        }
        for (int i = 1; i < a; i++)
        {
            if (c[i] != c[i - 1])
            {
                count++;
            }
        }
        if (count == 26)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}