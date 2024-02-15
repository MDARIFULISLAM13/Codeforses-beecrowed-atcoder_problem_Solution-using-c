#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > 59 && b < 131)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}