#include <Stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);

    int aa[300];
    int count = 0;

    for (int i = 0; i < b; i++)
    {
        scanf("%d", &aa[i]);
    }
    int c;
    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &aa[i + b]);
    }

    for (int l = 0; l < b + c; l++)
    {
        for (int i = 0; i < b + c; i++)
        {
            if (aa[i] > aa[i + 1])
            {
                int d = aa[i + 1];

                aa[i + 1] = aa[i];
                aa[i] = d;
            }
        }
    }
    for (int i = 0; i < b + c; i++)
    {
        if (aa[i] != aa[i + 1])
        {
            count++;
        };
    }
    if (count >= a)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }
}