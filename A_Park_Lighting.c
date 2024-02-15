#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c;
        scanf("%d %d", &b, &c);
        int d = b * c;
        int e = d / 2;
        if (d % 2 != 0)
        {
            e += 1;
        };
        printf("%d\n", e);
    }
}