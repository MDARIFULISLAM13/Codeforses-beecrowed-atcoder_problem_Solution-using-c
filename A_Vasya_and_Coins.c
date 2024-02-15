#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c;
        scanf("%d %d", &b, &c);
        int x;
        if (b == 0)
        {
            printf("1\n");
        }
        else
        {
            int x = b + (2 * c) + 1;
            printf("%d\n", x);
        }
    }
    return 0;
}