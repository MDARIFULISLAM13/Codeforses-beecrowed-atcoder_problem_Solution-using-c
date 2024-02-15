#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b;
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        int last = 0;
        for (int j = 1; j <= b; j++)
        {
            if (j % 3 == 0 || j % 10 == 3)
            {
                b += 1;
            };
            last = j;
        }
        printf("%d\n", last);
    }
}