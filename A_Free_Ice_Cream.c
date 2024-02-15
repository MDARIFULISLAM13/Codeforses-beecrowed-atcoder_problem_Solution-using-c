#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a; i++)
    {
        char c;
        int d;
        scanf("%c %d", &c, &d);
        printf("%c %d", c, d);
    }
}