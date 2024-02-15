#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b;
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        int c = 0;
        int d;
        int count = 0;
        for (int l = 1; l <= b; l++)
        {
            scanf("%d", &d);
            if (d == c)
            {
                count++;
            };
            c = d;
        }
        if (count >= b - 1 && b != 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}