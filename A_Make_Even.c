#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        if (b < 10)
        {
            printf("-1\n");
        }
        else if (b % 2 == 0)
        {
            printf("0\n");
        }
        else
        {
            int count = 0;
            while (b > 0)
            {
                int y = b % 10;
                if (y % 2 != 0)
                {
                    count++;
                }
                b /= 10;
            }
            printf("%d\n", count);
        }
    }
}