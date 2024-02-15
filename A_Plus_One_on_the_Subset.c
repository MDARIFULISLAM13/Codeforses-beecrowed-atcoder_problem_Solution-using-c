#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int b;
        scanf("%d", &b);
        long long int min = 100000000000000000;
        long long int max = 0;
        for (int l = 0; l < b; l++)
        {
            long long int c;
            scanf("%lld", &c);
            if (c < min)
            {
                min = c;
            };
            if (max < c)
            {
                max = c;
            }
        }
        printf("%lld\n", max - min);
    }
}