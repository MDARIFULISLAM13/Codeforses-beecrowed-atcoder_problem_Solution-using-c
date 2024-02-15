#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c;
        scanf("%d %d", &b, &c);
        if (c > b)
        {
            int d = c - b;
            if (d % 2 != 0)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
        else if (b == c)
        {
            printf("0\n");
        }
        else if (b > c)
        {
            int e = b - c;
            if (e % 2 == 0)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
    }
}