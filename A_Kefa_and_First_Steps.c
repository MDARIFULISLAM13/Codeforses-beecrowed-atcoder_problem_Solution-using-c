#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int count = 0;
    int max = 0;
    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        if (max > b)
        {
            if (b + 10 > max)
            {
                count++;
            }
            break;
        }
        count++;

        max = b;
    }
    printf("%d\n", count);
}