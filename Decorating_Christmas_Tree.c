#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c, d;
        scanf("%d %d %d", &b, &c, &d);
        int e = d / 3;
        int result = 0;
        if (e >= c)
        {
            result = c;
        }
        else
        {
            int f = c - e;
            int x = f / 2;
            result = x + e;
        }
        if (result >= b)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}