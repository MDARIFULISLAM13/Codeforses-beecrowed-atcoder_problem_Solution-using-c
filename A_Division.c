#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b;
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        if (b >= 1900)
        {
            printf("Division 1\n");
        }
        else if (1600 <= b && b <= 1899)
        {
            printf("Division 2\n");
        }
        else if (1400 <= b && b <= 1599)
        {
            printf("Division 3\n");
        }
        else
        {
            printf("Division 4\n");
        }
    }
}