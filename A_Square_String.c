#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        char b[100];
        scanf("%s", &b);
        int c = strlen(b);

        if (c % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            int d = c / 2;
            int count = 0;
            for (int j = 0; j < d; j++)
            {
                if (b[j] == b[j + d])
                {
                    count++;
                }
            }
            if (count == d)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}