#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            char b[8];
            scanf("%s", &b);
            for (int k = 0; k < 8; k++)
            {
                if (b[k] != '.')
                {
                    printf("%c", b[k]);
                }
            }
        }
        printf("\n");
    }
}