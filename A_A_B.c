#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int b, c;
        char d;
        scanf("%d %c %d", &b, &d, &c);
        int e = b + c;
        printf("%d\n", e);
    }
    return 0;
}