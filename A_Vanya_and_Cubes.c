#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b = a;
    int c = 0;
    int d = 0;
    for (int i = 1; i <= 100000; i++)
    {

        c = ((i * i) + i) / 2;
        if (b < c)
        {
            break;
        };
        b = b - c;
        d++;
    }

    printf("%d\n", d);
}