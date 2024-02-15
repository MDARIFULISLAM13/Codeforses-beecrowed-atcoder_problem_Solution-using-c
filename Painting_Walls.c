#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c, d;
        scanf("%d %d %d", &b, &c, &d);
        int e = b * c;
        int f = d / 2;
        int t = f / e;
        printf("%d\n", t);
    }
}