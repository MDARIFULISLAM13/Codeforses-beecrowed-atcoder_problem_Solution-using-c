#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c, d, e;
        scanf("%d %d %d %d", &b, &c, &d, &e);
        int f = b + c + d + e;
        if (f % 3 != 0 || f / 3 <= a || f / 3 <= b || f / 3 <= c)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}