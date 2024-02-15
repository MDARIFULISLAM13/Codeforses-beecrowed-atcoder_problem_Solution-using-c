#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {

        int b;
        scanf("%d", &b);

        if (b % 4 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}