#include <stdio.h>
int lucky(int x)
{
    while (x > 0)
    {
        int b = x % 10;

        if (b != 4 && b != 7)
        {
            return 0;
        }
        x = x / 10;
    }
    return 1;
}
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0 && lucky(i))
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}