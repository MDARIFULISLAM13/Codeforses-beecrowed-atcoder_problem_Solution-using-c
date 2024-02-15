#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int b;
        scanf("%d", &b);
        char c[b];
        scanf("%s", &c);
        int count = 0;
        int cc = 0;
        for (int l = 0; l < b; l++)
        {
            if (b != 5)
            {

                break;
            };
            if (c[l] == 'T' || c[l] == 'i' || c[l] == 'm' || c[l] == 'u' || c[l] == 'r')
            {
                if (c[l] != c[l + 1] && c[l] != c[l + 2] && c[l] != c[l + 3] && c[l] != c[l + 5])
                    cc = cc + c[l];
            }
        }
        if (cc == 529)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
}