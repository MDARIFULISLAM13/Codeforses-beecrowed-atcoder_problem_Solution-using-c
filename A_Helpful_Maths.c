#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", &a);
    int b = strlen(a);
    int count = 0;
    int p = (b / 2) + 1;
    for (int i = 0; i < b; i++)
    {
        if (a[i] == '1')
        {
            printf("1");
            count++;
            if (count < p)
            {
                printf("+");
            };
        };
    }
    for (int i = 0; i < b; i++)
    {
        if (a[i] == '2')
        {
            printf("2");
            count++;
            if (count < p)
            {
                printf("+");
            };
        };
    }
    for (int i = 0; i <= b; i++)
    {
        if (a[i] == '3')
        {
            printf("3");
            count++;
            if (count < p)
            {
                printf("+");
            };
        };
    }
    printf("\n");
}