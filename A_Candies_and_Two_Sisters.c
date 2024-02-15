#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        if (b % 2 == 0)
        {
            b = b - 2;
            printf("%d\n", b / 2);
        }
        else
        {
            printf("%d\n", b / 2);
        }
    }
}
