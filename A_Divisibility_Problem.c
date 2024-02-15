#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c;
        scanf("%d  %d", &b, &c);
        if (b % c != 0)
        {
            int d = b + c;
            int e = d % c;
            printf("%d\n", c - e);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}