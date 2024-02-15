#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int p = 0;
    int count = 0;
    int max = 0;
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);

        if (b > p)
        {
            count++;
        };
        if (count > max)
        {
            max = count;
        };

        if (p >= b)
        {

            count = 1;
        }
        p = b;
    }
    printf("%d\n", max);
}