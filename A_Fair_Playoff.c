#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c, d, e;
        scanf("%d %d %d %d", &b, &c, &d, &e);
        int fmin = 0, fmax = 0, smin = 0, smax = 0;
        if (b > c)
        {
            fmin = c;
            fmax = b;
        }
        else
        {
            fmin = b;
            fmax = c;
        }
        if (d > e)
        {
            smin = e;
            smax = d;
        }
        else
        {
            smin = d;
            smax = e;
        }
        if (fmax < smin || smax < fmin)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}