#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int givers[n + 1];

    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &givers[i]);
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (givers[j] == i)
            {
                printf("%d ", j);
                break;
            }
        }
    }

    return 0;
}
