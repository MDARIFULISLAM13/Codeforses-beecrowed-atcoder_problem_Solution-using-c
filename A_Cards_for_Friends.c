#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c, d;
        scanf("%d %d %d", &b, &c, &d);
        int count = 1;
        while (b % 2 == 0)
        {
            b /= 2;
            count *= 2;
        }
        while (c % 2 == 0)
        {
            c /= 2;
            count *= 2;
        }

        if (count >= d)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}