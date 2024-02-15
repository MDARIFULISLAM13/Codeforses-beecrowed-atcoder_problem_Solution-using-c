#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        int c;
        int count = 0;
        int o = 0;
        int e = 0;
        for (int j = 1; j <= b; j++)
        {
            scanf("%d", &c);
            if (c % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
            count += c;
        }
        if (count % 2 != 0 || o == e || b % 2 != 0)
        {
            printf("YES\n");
        }
        else
        {

            printf("NO\n");
        }
    }
}