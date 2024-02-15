#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int m = 0;
    int f = 0;
    int b, c;
    for (int i = 1; i <= a; i++)
    {
        scanf("%d %d", &b, &c);
        if (b > c)
        {
            m += 1;
        }
        else if (c > b)
        {
            f += 1;
        }
    }
    if (m > f)
    {
        printf("Mishka\n");
    }
    else if (f > m)
    {
        printf("Chris\n");
    }
    else if (f == m)
    {
        printf("Friendship is magic!^^\n");
    }
}