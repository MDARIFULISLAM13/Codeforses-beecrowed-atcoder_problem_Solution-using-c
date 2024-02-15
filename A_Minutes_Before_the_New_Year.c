#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c;
        scanf("%d %d", &b, &c);
        int d = 24 - b;
        int e = (d * 60) - c;
        printf("%d\n", e);
    }
}