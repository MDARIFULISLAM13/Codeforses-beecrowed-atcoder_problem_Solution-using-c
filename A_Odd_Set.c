#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        int e = 0;
        int o = 0;
        for (int j = 1; j <= b * 2; j++)
        {
            int c;
            scanf("%d", &c);
            if (c % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if (o == e)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
}