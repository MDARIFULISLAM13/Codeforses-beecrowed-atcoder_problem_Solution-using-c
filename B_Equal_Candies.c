#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b;
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        int c;
        int count = 0;
        int min = 10000000000000;
        for (int l = 0; l < b; l++)
        {
            scanf("%d", &c);
            count = c + count;
            if (min > c)
            {
                min = c;
            };
        }
        int t = b * min;
        printf("%d\n", count - t);
    }
}