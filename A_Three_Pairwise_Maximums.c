#include <stdio.h>

void find_triplet(int x, int y, int z)
{
    if (x == y && y == z)
    {
        printf("YES\n%d %d %d\n", x, x, x);
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        find_triplet(x, y, z);
    }

    return 0;
}
