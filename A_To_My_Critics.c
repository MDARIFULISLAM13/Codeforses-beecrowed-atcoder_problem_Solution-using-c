#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b, c, d;
    for (int i = 1; i <= a; i++)
    {
        scanf("%d %d %d", &b, &c, &d);
        if (b + c > 9)
        {
            printf("YES\n");
        }
        else if (b + d > 9)
        {
            printf("YES\n");
        }
        else if (d + c > 9)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}