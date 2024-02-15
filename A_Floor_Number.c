#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b, c;
    for (int i = 1; i <= a; i++)
    {
        scanf("%d %d", &b, &c);
        int d;
        if (b > 1)
        {
            d = b - 2;
        }
        else
        {
            d = b;
        }
        int t = d / c;
        if (d % c != 0)
        {
            t = t + 1;
        };
        if (b > 1)
        {
            t = t + 1;
        }
        printf("%d\n", t);
    }
}