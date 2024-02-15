#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int b;
        int count = 0;
        for (int j = 1; j < 4; j++)
        {
            scanf("%d", &b);
            if (b != j)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("1\n");
        }
        else
        {
            printf("%d\n", count);
        }
    }
}