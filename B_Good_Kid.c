#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        int c[b];
        int min = 10;
        int k;
        int ans = 1;
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &c[j]);
            if (min > c[j])
            {
                min = c[j];
                k = j;
            }
        }
        for (int l = 0; l < b; l++)
        {
            if (l != k)
            {
                ans *= c[l];
            }
        }
        ans = ans * (min + 1);
        printf("%d\n", ans);
    }
}