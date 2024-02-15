#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        int b, c, d;
        scanf("%d %d %d", &b, &c, &d);
        if (b <= c && c <= d || d >= b)
        {
            printf("+\n");
        }
        else
        {
            printf("-\n");
        }
    }
    return 0;
}