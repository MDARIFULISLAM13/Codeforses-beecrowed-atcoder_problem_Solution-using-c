#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        int c = b / 2;
        if (b % 2 != 0)
        {
            c += 1;
        }
        printf("%d %d\n", c, b);
    }
}