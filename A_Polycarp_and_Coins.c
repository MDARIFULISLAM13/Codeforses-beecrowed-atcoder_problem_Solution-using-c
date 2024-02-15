#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        for (int l = b / 3; l <= b; l++)
        {
            if ((l * 1) + ((l + 1) * 2) == b)
            {
                printf("%d %d\n", l, l + 1);
                break;
            }
            else if ((l * 1) + ((l - 1) * 2) == b)
            {
                printf("%d %d\n", l, l - 1);
                break;
            }
            else if ((l * 1) + (l * 2) == b)
            {
                printf("%d %d\n", l, l);
                break;
            }
        }
    }
}