#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    while (a--)
    {
        char c;
        scanf(" %c", &c);

        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'o' || c == 'r' || c == 'c' || c == 'e' || c == 's')
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
