#include <stdio.h>
int main()
{
    int aa;
    scanf("%d", &aa);
    for (int i = 1; i <= aa; i++)
    {
        int a;
        scanf("%d", &a);
        int ac = 0;
        int zc = 0;
        int b = a / 100000;
        int c = (a / 10000) % 10;
        int d = (a / 1000) % 10;
        ac = b + c + d;
        int e = (a / 100) % 10;
        int f = (a / 10) % 10;
        int g = a % 10;
        zc = e + f + g;
        if (ac == zc)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
