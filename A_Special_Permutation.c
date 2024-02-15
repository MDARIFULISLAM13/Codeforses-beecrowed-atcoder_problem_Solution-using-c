#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        int a;
        scanf("%d", &a);
        if (a % 2 != 0)
        {
            int aa = a - 2;
            for (int i = 1; i <= aa; i++)
            {
                if (i % 2 != 0)
                {
                    printf("%d ", i + 1);
                }
                else
                {
                    printf("%d ", i - 1);
                };
            }
            printf("%d %d\n", a, a - 2);
        }
        else
        {
            for (int i = 1; i <= a; i++)
            {
                if (i % 2 != 0)
                {
                    printf("%d", i + 1);
                }
                else
                {
                    printf("%d", i - 1);
                };
                if (i != a)
                {
                    printf(" ");
                }
                else
                {
                    printf("\n");
                }
            }
        }
    }
}