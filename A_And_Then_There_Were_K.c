#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        if (b % 2 == 0)
        {
            printf("%d\n", b - 1);
        }
        else
        {
            printf("%d\n", b - 2);
        }
    }
    return 0;
}