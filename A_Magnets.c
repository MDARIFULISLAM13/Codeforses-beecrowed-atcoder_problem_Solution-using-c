#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char prev, current;
    int groups = 1;

    scanf(" %c", &prev);

    for (int i = 1; i < n; ++i)
    {
        scanf(" %c", &current);
        if (current != prev)
        {
            groups++;
            prev = current;
        }
    }

    printf("%d\n", groups);

    return 0;
}
