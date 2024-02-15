#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    long long int b;

    for (int i = 1; i <= t; i++)
    {
        scanf("%lld", &b);
        if (b == 1)
        {
            printf("2\n");
        }
        else if (b % 3 == 0)
        {
            printf("%lld\n", b / 3);
        }
        else
        {
            printf("%lld\n", (b / 3) + 1);
        }
    }
    return 0;
}
