#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        if (b == 2)
        {
            printf("2\n");
        }
        else
        {
            int c = b / 2;
            int x = 1;
            int sum1 = 0;
            int sum2 = 0;
            for (int j = 1; j <= b; j++)
            {
                if (j >= c && j != b)
                {
                    int f = x * 2;
                    sum1 = sum1 + f;
                    x = f;
                }
                else
                {
                    int f = x * 2;
                    sum2 = sum2 + f;
                    x = f;
                }
            }
            printf("%d\n", sum2 - sum1);
        }
    }
}