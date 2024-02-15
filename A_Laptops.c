#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b, c, d, e;
    scanf("%d %d %d %d", &b, &c, &d, &e);
    if (b < d && d > e)
    {
        printf("Happy Alex\n");
    }
    else
    {
        printf("Poor Alex\n");
    }
}