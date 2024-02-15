#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 != 0)
    {
        printf("-1\n");
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