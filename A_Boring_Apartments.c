#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int b;
        scanf("%d", &b);
        int t = 1;
        if (b / 10)
        {
            t = 3;
        };
        if (b / 100)
        {
            t = 6;
        };
        if (b / 1000)
        {
            t = 10;
        }
        int c = ((b % 10) - 1) * 10;
        printf("%d\n", t + c);
    }
}