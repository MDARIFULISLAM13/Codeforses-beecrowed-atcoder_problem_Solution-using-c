#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int b, c, d;
        scanf("%d %d %d", &b, &c, &d);
        if (b < c && c < d || b > c && c > d)
        {
            printf("%d\n", c);
        }
        else if (b > c && b < d || b < c && b > d)
        {
            printf("%d\n", b);
        }
        else if (d > c && b > d || d < c && b < d)
        {
            printf("%d\n", d);
        }
    }
}