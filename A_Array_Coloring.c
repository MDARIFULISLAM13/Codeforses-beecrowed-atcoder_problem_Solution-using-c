#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        if (b == 2)
        {
            int c, d;
            scanf("%d %d", &c, &d);
            if (c % 2 == d % 2)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            int s1 = 0;
            int s2 = 0;
            int e;
            for (int j = 1; j <= b; j++)
            {
                scanf("%d", &e);
                if (j == 1 || j == 2 || j == 4)
                {
                    s1 = s1 + e;
                }
                else
                {
                    s2 = s2 + e;
                }
            }
            if (s1 % 2 == s2 % 2)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}