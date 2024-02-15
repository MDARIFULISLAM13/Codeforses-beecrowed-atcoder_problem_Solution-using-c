
#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    int sum = 0;
    char c[100];
    for (int i = 0; i < a; i++)
    {
        scanf("%s", c);
        if (c[0] == 'T')
        {
            sum += 4;
        };
        if (c[0] == 'C')
        {
            sum += 6;
        };
        if (c[0] == 'O')
        {
            sum += 8;
        };
        if (c[0] == 'D')
        {
            sum += 12;
        };
        if (c[0] == 'I')
        {
            sum += 20;
        }
    }
    printf("%d\n", sum);
}
