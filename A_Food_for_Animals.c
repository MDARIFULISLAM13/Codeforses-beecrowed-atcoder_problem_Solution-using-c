#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c, x, y;
        scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);

                if ((x <= a + c) && (y <= b + c) && (x + y <= a + b + c))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
