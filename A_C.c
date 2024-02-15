#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c, d;
        scanf("%d %d %d", &b, &c, &d);
        int count = 0;
        while (b <= d && c <= d)
        {
            if (c >= b)
            {
                b += c;
            }
            else
            {
                c += b;
            }
            count++;
        }
        printf("%d\n", count);
    }
}