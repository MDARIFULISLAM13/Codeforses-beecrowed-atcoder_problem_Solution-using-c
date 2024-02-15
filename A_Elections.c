#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b, c, d;
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d %d", &b, &c, &d);
        int e = 0;
        if (b > e)
        {
            e = b;
        };
        if (c > e)
        {
            e = c;
        };
        if (d > e)
        {
            e = d;
            ;
        }
        int x, y, z;
        x = e - b;
        y = e - c;
        z = e - d;
        if (x != 0)
        {
            x = x + 1;
        };
        if (y != 0)
        {
            y = y + 1;
        };
        if (z != 0)
        {
            z = z + 1;
        };
        if (b == 0 && c == 0 && d == 0)
        {
            printf("1 1 1\n");
        }
        else
        {
            printf("%d %d %d\n", x, y, z);
        }
    }
}